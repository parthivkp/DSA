#include<bits/stdc++.h>
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
bool compare(char a,char b)
{
    return (a=='['&&b==']') || (a=='('&&b==')') || (a=='{'&&b=='}');

}
bool stackbalance(string g){

stack <char> s;
for(int i=0;i<g.length();i++){
    if(g[i]=='['||g[i]=='{'||g[i]=='(')
    s.push(g[i]);
    else if(s.empty()==true) return false;
    else{
        if(compare(s.top(),g[i]))
          s.pop();
          else 
          return false;  
    }
} if(s.empty()==true)
   return true;
   else 
   return false;

}


int main() {
	
 bool j=stackbalance("]{}");
 cout<<boolalpha;
  cout<<j;
    
}