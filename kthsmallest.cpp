#include<bits/stdc++.h>
using namespace std;

int lamuto(int arr[],int low,int high){
    int pivot=arr[high-1];
    int j=0;
    for(int i=0;i<high-1;i++){
        if(arr[i]<pivot){
        swap(arr[i],arr[j]);j++;
        }
        else
            continue;
    }swap(arr[j],arr[high-1]);
    return j;
}


int  quicksort(int arr[],int low,int high,int k){

while(low<=high){
    int p=lamuto(arr,low,high); 
    if(p==k-1)
    return arr[p];
    else if(p>k-1)
    high=p-1;
    else 
    low=p+1;
} return -1;

}



int main(){
int arr[]={1,4,2,5,6};
int k=3;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=quicksort(arr,0,n,k);
cout<<ans;


    return 0;
}