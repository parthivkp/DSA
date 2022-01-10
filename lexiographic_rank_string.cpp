#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    else return((n)*fact(n-1));
} 

//rank is no of lexiograpic less words + 1;

int main(){
   string op="parthiv";
   cout<<op.substr(1,2);
    int ans=0;
string g="string";
int arr[256]={0};

for(int i=0;i<g.length();i++){
    arr[g[i]]++;
}
//cumulative sum
for(int i=1;i<256;i++){
arr[i]=arr[i]+arr[i-1];
}
int fac=fact(g.length());
int len=g.length();

for(int i=0;i<g.length()-1;i++){ 
    int n=arr[g[i]]-1;
    ans+=(n*fact(--len));
    
    for(int count=g[i];count<256;count++)
    arr[count]--;
}ans=ans+1;
cout<<ans;

    return 0;
}