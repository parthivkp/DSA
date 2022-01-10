#include<bits/stdc++.h>
using namespace std;


int subarrsum(int arr[],int n,int k){
int cursum=0,count=0;
unordered_map<int,int>h;

for(int i=0;i<n;i++){
cursum+=arr[i];
if(cursum==k)count++;
if(h.find(cursum-k)!=h.end()){
    count=count+h[cursum-k];
}h[cursum]++;
}

return count;
}


int main(){ 
int arr[]={20,30,40,50};
int k=50;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<subarrsum(arr,n,k);

return 0;
}