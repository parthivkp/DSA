#include<bits/stdc++.h>
using namespace std;


int main(){
string j="32 54 12 52 56 8 30 44 94 44 39 65 19 51 91 1 5 89 34 25 58 20 51 38 65 30 7 20 10 51 18 43 71 97 61 26 5 57 70 65 0 75 29 86 93 87 87 64 75 88 89 100 7 40 37 38 36 44 24 46 95 43 89 32 5 15 58 77 72 95 8 38 69 37 24 27 90 77 92 31 30 80 30 37";
j.erase(0,1);
stringstream ss(j);
int word;
int count=0;
// int k;
// ss>>k;ss>>k;

while(ss>>word){
    cout<<word;
    count++;
}
cout<<j.find("54");

cout<<count<<" ";
//cout<<k;
   
	//cout<<typeid().name();
    return 0;
}

 int atoi(string str)
    {   int power=1;int i=0;
       int res = 0;
       if(str[0]=='-'){
       power=-1;i++; 
       }
 
    for (; str[i] != '\0'; ++i){
        
    if(isalpha(str[i])) return -1;
        res = res * 10 + str[i] - '0';
    }
   
    return res*power;
    } 