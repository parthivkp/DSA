#include<bits/stdc++.h>
using namespace std;


int main(){
   
    kp.insert({1,2});
    kp.insert({143,2});
    
    string all="abcdefghijklmnopqrstuvwxyz";
    int diff=0;
char c1='p';
char c2='l';
int pos1=all.find(c1);
int pos2=all.find(c2);
if(pos1>pos2){
    diff=25-pos1+pos2;
    cout<<all[(diff+pos2)%25];
}else{
diff=abs(pos2-pos1);

cout<<all[(diff+pos2)%26];
}

    return 0;
}