#include<bits/stdc++.h>
using namespace std;

int main(){ int count=0;
int arr1[]={0, 1, 0, 0,0,0};
int arr2[]={1, 0, 1, 0, 0, 1};
int n = sizeof(arr1)/sizeof(arr1[0]);
unordered_map<int,int>j;
int dif[n];
for(int i=0;i<n;i++){
    dif[i]=arr1[i]-arr2[i]; //in this dif array find longest sybarray with sum zero
}int sum=0;
for(int i=0;i<n;i++){
sum+=dif[i];
if(j.find(sum)==j.end())
j.insert({sum,i});
else{
count=i-j[sum];
count=max(count,i-j[sum]);

}
}
cout<<count;



    return 0;
}