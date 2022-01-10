#include<bits/stdc++.h>
using namespace std;

void prevgreater(int arr[],int n){
  
stack<int>k;
k.push(arr[0]);
for(int i=0;i<n;i++)
{
    while(k.empty()==false&&arr[i]>=k.top())
    k.pop();
    int gtr=(k.empty())? -1:(k.top());
    cout<<gtr<<" ";
    k.push(arr[i]);
}
}
bool greaters(const int &a,const int &b){
    return a>b;
}

int main(){
    priority_queue<int,vector<int>,greater<int>>k;
    int arr[]={1,12,4,5,23,11,2};
    int n=7;
    make_heap(arr,arr+7,greaters);
    for (auto p:arr)
    cout<<p<<" ";
 //prevgreater(arr,n);

    return 0;
}