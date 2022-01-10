#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int start,int mid,int end){  
  
    int n1=mid-start+1; // 
    int n2=end-mid;//
    int left[n1],right[n2];//
    for( int i=0;i<n1;i++)
    left[i]=arr[start+i];//
    for(int  j=0;j<n2;j++)
    right[j]=arr[mid+j+1];//
int i=0,j=0,k=start,res=0; 
    while(i<n1 && j<n2){
if(left[i]<=right[j])
{
arr[k++]=left[i++];
}
else{
arr[k++]=right[j++];
res=res+(n1-i);
}
    }
    while(i<n1)
    { 
    arr[k++]=left[i++];
    }

    while(j<n2){
    arr[k++]=right[j++];
    }
return res;
}


int  mergesort(int arr[],int start,int end){
    int res=0;
    if(start<end){
        int mid=(start+end)/2;
        res+= mergesort(arr,start,mid);
        res+=mergesort(arr,mid+1,end);
        res+=merge(arr,start,mid,end);
    } return res;
}


int main(){

int arr[]={3,2,9,5,4};
int size=sizeof(arr)/sizeof(arr[0]);
int res=mergesort(arr,0,size-1);
for(int x:arr){
    cout<<x<<" ";
}cout<<endl<<res;


    return 0;
}