#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;
#define add(x,y) x+y;


int main(){

int f[]={10,20,20,40,30,4,5,30};
int size=sizeof(f)/sizeof(f[0]);
for(int i=0;i<size;i++){
    int count=0;
    for(int j=0;j<size;j++){ 
       
        if(f[i]==f[j]){
        count++;
     }
    }if(count<=1)
    cout<<f[i]<<" ";
}

}