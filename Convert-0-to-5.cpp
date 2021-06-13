#include<bits/stdc++.h>

using namespace std;

   
 
  
int main ()
{    // array of integer pointers pointing array
   int * arr[10];
    
  int k[3]={1,2,3};
  int j[2]={4,5};
  arr[1]=j;
  arr[0]=k;
  cout<<*(arr[1]+1)<<endl; //same 
    cout<<arr[1][1]<<endl; // both are same

 //char *o="string"; //warning but prints string...

int *l;
l=j; //assigns the first address
char * q[4]={"hello","hi","bye","gm"};

 cout<<*(l+1)<<endl;
 cout<<*q<<endl; //hello
 cout<<*q+1<<endl; //ello
 cout<<*(q+1)<<endl; //hi
 cout<<"parthiv"+1; //arthiv
 cout<<endl<<*(q[0]); //h (of hello);


  return 0;
}
