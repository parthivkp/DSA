#include<bits/stdc++.h>

using namespace std;


void rearrange(int arr[],int n){
    for(int i=0,j=n-1;i<=j;){
        
        if(arr[i]>0){
        swap(arr[i],arr[j]);
        j--;
        }else i++;
    }
}


int main(){
int arr[]={-1, 2, -3, 4,-1, 5, 6, -7, 8, 9};
int size =sizeof(arr)/sizeof(arr[0]);
rearrange(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}