#include<bits/stdc++.h>
#include<omp.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    int i=0,j=0;
    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=arr[mid+j+1];
    }i=0,j=0;
    int k=low;
    while(i<n1&&j<n2){
        if(left[i]<right[j]){
            arr[k++]=left[i++];
        }else{
            arr[k++]=right[j++];
        }
    }
    for(;i<n1;i++){
arr[k++]=left[i];
    }
     for(;j<n2;j++){
arr[k++]=right[j];
    }
}


//;
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        	omp_set_num_threads(3);
         #pragma omp parallel sections
         {
              #pragma omp section
              {
                   printf("Process handing left recursion is %d\n",omp_get_thread_num());
        mergesort(arr,low,mid);
              }
               #pragma omp section
               {  printf("Process handing right recursion is %d\n",omp_get_thread_num());
        mergesort(arr,mid+1,high);
        }
         }
        merge(arr,low,mid,high);
    }
}

int main(){
int arr[]={10,9,8,90,55};
int size=sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,size-1);
for(auto p:arr){
    cout<<p<<" ";
}

    return 0;
}