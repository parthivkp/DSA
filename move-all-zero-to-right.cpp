#include<bits/stdc++.h>
using namespace std;
void printto(int n,int i=1){
    if(i<n)
    cout<<i;
    printto(n,i+1);
}

int main(){
    int arr[]={1,2,3,4,0,5,6,0,7,8,9,10}; //1,2,3,4,5,6,0,0,7,8,9,10
    for(int i=0;i<12;i++){
        if(arr[i]==0){
            for(int j=i+1;j<12;j++){
                if(arr[j]!=0){ 
                swap(arr[i],arr[j]); break;
                }
            }
        }
    }
    
    for(auto x :arr){
        cout<<x<<" ";
    }
    return 0;
}