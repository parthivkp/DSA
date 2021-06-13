#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    
    for(int i=0,j=n-1;i!=j;i++,j--){
        swap(arr[i],arr[j]);
    }
}



int main(){
     
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}