#include<bits/stdc++.h> 
using namespace std; 


void heapify(int arr[],int n,int i){
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;
    if(arr[left]>arr[largest] && left<n) largest=left;
    if(arr[right]>arr[largest] && right <n) largest =right;
    if(i!=largest){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
    
    
}
void buildheap(int arr[],int n){
    for(int i=n-2/2;i>=0;i--)
    heapify(arr,n,i);
}




int main(){
    
    int arr[]={3,2,4,5,6,1,10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    buildheap(arr,size);
    for(int j=size-1;j>=1;j--){
        swap(arr[j],arr[0]);
        size--;
        heapify(arr,size,0);
    }
    for(auto p:arr){
        cout<<p<<"--";
    }cout<<endl;
    
    
    
    return 0;
}