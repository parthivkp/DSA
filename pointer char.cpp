#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;
#define add(x,y) x+y;



int main()
{
char *o[]={"hj","iopgg","lol"};
int arr[]={1,2,3};


cout<<*(arr);
cout<<*(o); //hj




cout<<*(arr+2);
cout<<*(o[1]+2)<<endl;
cout<<*(o+1)+1<<endl;   //auto derefrence
cout<<*(*(o+1)+1);  //particular de refrence almost like twice
}
