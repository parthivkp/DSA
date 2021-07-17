#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int largestsum(int n){
 int g=0;

    while(n>0){
        
        g=(g)+(n%10);
        n=n/10;
    }
 return g;
}
bool comp(pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}


int main() {
int n;
vector<pair<int,int>>k;
	cin>>n;
    for(int i=n;i>0;i--){
        if(n%i==0){
            k.push_back({i,largestsum(i)});
        }
    }
    sort(k.begin(), k.end(), comp);
    
    for(auto x:k){
        cout<<x.first<<endl;break;
       
    }
	return 0;
}