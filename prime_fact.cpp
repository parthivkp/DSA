#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int isprime(int n){


for(int i=2;i<n;i++){
    if(n%i==0) return 0;
}
return 1;
}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;



for(int i=2;i<=n;i++){
    if(isprime(i)){
        int x=i;
        while(n%x==0){
            cout<<i<<" ";
            x=x*i;
        }
    }
}
    return 0;
}