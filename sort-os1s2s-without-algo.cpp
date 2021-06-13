#include<bits/stdc++.h>

using namespace std;

   
    void sort012(int a[], int n)
    {
       int count[3]={0};
    for (int x=0;x<n;x++){
        count[a[x]]++;
    }
int k=0;
    for(int x=0;x<3;x++){
        for(int g=0;g<count[x];g++){
            
            a[k++]=x;
        }
    } }
     //different method
     void sort012diff(int a[], int n)
    {
        int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
    
}
    
    

    int main(){
        int a[]={1,0,2,0,1,2}; //should contain only 0s,1s,2s..
        int size=sizeof(a)/sizeof(a[0]);
        sort012(a,size);
        for(int g=0;g<size;g++)
        cout<<a[g]<<" ";
    }
    
