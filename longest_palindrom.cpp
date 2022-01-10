#include<bits/stdc++.h>
using namespace std;

string longestsubstr(string str){
    int n=str.length();
    int  dp[n][n];
     memset(dp, 0, sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        dp[i][j]=0;
    }
    int maxlength=1,start=0;
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(int i=0;i<n-1;++i){
        if(str[i]==str[i+1]){
        dp[i][i+1]=1;
        maxlength=2;
        start=i;

    }
    }
    for(int k=3;k<=n;++k){
        for(int i=0;i<n-k+1;++i){
            int j=i+k-1;
            if(dp[i+1][j-1]&&str[i]==str[j]){
                dp[i][j]=1;
                if(k>maxlength){
                    start=i;
                    maxlength=k;
                }
            }
        }
    }cout<<maxlength<<endl;
    return str.substr(start,maxlength);
}

int main(){
string str="forgeeksskeegfor";
string ans=longestsubstr(str); 
cout<<ans;
}