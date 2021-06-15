#include <iostream>
#include <algorithm>
#include<typeinfo>
using namespace std;


string isBalanced(string s) {

int l=s.length();
int i=1;
while(true)
{   int k=s.find("()");
    
    
    if(k>=0){
        s.replace(k,2,"");
    }  int h=s.find("[]");
     if(h>=0){
        s.replace(h,2,"");
    } int g=s.find("{}");
    if(g>=0){
        s.replace(g,2,"");
    } else if(k<0 && h<0 && g<0) break;
    
    
}

if(s=="")
return "YES";
else 
return "NO";




}

int main() {
	
  string j=isBalanced("()([{}])");
  cout<<j;
    
}