#include<bits/stdc++.h>
using namespace std;

void subarraysum(int arr[],int n){
    int maxi=0,sum=0;
for(int i=0;i<n;i++){
    arr[i]=(arr[i]==0)?-1:1;
}
unordered_map<int,int> p;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum == 0)
         maxi = i+1;
    if(p.find(sum)==p.end())
    p.insert({sum,i});
    else{
        maxi=max(maxi,i-p[sum]);
    }
}cout<<maxi;


}


int main(){
int arr[]={0,0,1,1,1,1,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
subarraysum(arr,n);


    return 0;
}