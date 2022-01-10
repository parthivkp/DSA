#include<bits/stdc++.h>
using namespace std;


int main(){
string e="abcabcd";
int res=0;
int n=e.length();int start=0; 
vector<int> k(256,-1);
for(int j=0;j<n;j++){
    
    start=max(start,k[e[j]]+1);
    int maxlength=j-start+1;
    
    res=max(res,maxlength);
  
    k[e[j]]=j;
}
cout<<res;


    return 0;
}