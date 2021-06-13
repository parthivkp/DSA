#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;
#define add(x,y) x+y;



int main(){

int *a=new int[3];

int arr[]={10,20,30};
int *p1=arr;

int(*q)[3]=&arr; // This is a pointer to array of size 3 int *P[3] is an array of pointers

for (int i = 0; i < 3; i++)
{
    cout<<*(*(q)+i)<<" ";
    
}


}