#include<bits/stdc++.h>
using namespace std;

void largestkelements(int arrs[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq(arrs,arrs+k);
    ;
    for(int i=k;i<n;i++){
        if(arrs[i]>pq.top()){
            pq.pop();
            pq.push(arrs[i]);
        }}
        while(pq.empty()==false){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    

}


int main(){
 int arrs[]={81,33,1,2,3,4,5,6,33,66};
 int size=sizeof(arrs)/sizeof(arrs[0]);
 largestkelements(arrs,size,4);

    return 0;
}