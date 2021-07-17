#include<bits/stdc++.h>
using namespace std;

void freq(int arr[],int n,int k){
    unordered_map<int ,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    vector<int> freq[n];
    int i=0;
for(int q=0;q<n;q++){
    int f=m[arr[q]];

    if(m[arr[q]]!=-1){
      freq[f].push_back(arr[q]);  
       m[arr[q]]=-1;            
    }
}
    //here order is not maintained for elements with same frequency
    // for(auto x:m){
    //     freq[x.second].push_back(x.first);  
    // }
    int count=0;
    for(int j=n-1;j>=0;j--){
    for(auto y:freq[j]){
        cout<<y<<" ";
        count++;
        if(count==k)return;
    }
}
}
int main(){
    int arr[]={1,1,5,5,7,7,8,8,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    freq(arr,n,k);


    return 0;
}