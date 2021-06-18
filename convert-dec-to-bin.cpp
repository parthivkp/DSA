#include <bits/stdc++.h>
using namespace std;
  
// Driver Code
int main()
{
    vector <int> k;
    int n=186;

    while(n){
        k.push_back(n%2);
        n=n/2;
    }reverse(k.begin(),k.end());
  for(int i=0;i<k.size();i++){
      cout<<k[i]<<" ";
  }
    return 0;
}