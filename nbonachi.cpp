#include<bits/stdc++.h>
using namespace std;

void nbonachi(int n,int m){
    int o=n-1,sum=0,start=0;
    vector<int> s;
    while(o){
       s.push_back(0);
        o--;
        }s.push_back(1);
        for(int i=0;i<n;i++){
            sum+=s[i];
        }s.push_back(sum);

        for(int i=n+1;i<m;i++){
         
         sum+=s.back()-s[start];
         start++;
         s.push_back(sum);
        }
for(auto l:s)
cout<<l<<" ";

}
int main(){ 
int n=3,m=10;
nbonachi(n,m);

return 0;
}