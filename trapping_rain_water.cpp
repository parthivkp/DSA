#include<bits/stdc++.h>
using namespace std;

void findwater1(int arr[],int n){

int res=0;
for(int i=1;i<n-1;i++){int lmax=arr[i];
    for(int j=0;j<i;j++){
     lmax=max(lmax,arr[j]);
    }int rmax=arr[i];
    for(int j=i+1;j<n;j++){
     rmax=max(rmax,arr[j]);
    }
    res=res+min(rmax,lmax)-arr[i];
} cout<<res;

}
//efficient solution
void findwater2(int arr[],int n){
int lmax[n],rmax[n],res=0;
lmax[0]=arr[0];
for(int i=1;i<n;i++){
    lmax[i]=max(lmax[i-1],arr[i]);  
}
/// this is tricky
rmax[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--){
    rmax[i]=max(rmax[i+1],arr[i]);
}
for(int i=1;i<n-1;i++){
res=res+min(lmax[i],rmax[i])-arr[i];
} cout<<res;
}

int main(){
int arr[]={5,0,6,2,3};

int n=sizeof(arr)/sizeof(arr[0]);
findwater2(arr,n);


    return 0;
}