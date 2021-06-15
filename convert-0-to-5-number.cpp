#include <bits/stdc++.h>
using namespace std;

int convert(int n){
    int newnum=0,place=1;
    int k=n;
     n=n%10;            
       
    while(k>0){ 
         k=k/10;       
        if(n==0){
            newnum=newnum+(5*place);       
        }else{
            newnum=newnum+(n*place);
        }
        n=k%10;                 
                  
        place=place*10;    
    }

    return newnum;
}

int main(){
    int number=1012100;
    int newnumber=convert(number);
    cout<<newnumber;
    return 0;
}