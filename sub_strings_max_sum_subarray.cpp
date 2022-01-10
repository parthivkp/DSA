#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> k;
void PrintAllSubsets(int *arr, int n){    
    int snum = 0;
    while(snum<pow(2,n)){
        vector<int> g;
        for(int i=0;i<n;++i){
            // the following condition checks
            // if the ith bit of snum in binary form
            // is 1 or not
            if((snum&(1<<i))!=0){
               // cout<<arr[i]<<' ';
                g.push_back(arr[i]);
            }
        }
       // cout<<endl;
        ++snum; k.push_back(g);
    }
            
}

void substring(string s,string curr,int i=0){
    if(i==s.length()){
    cout<<curr<<" ";
    return;
    }
    substring(s,curr,i+1);
    substring(s,curr+s[i],i+1);
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main()
{
    int arr[] = {1,2,-1}; // input array
    int n = 3;
  //  PrintAllSubsets(arr,n);   
   // auto iterator::it;m
    for(int i=0;i<k.size();i++){
        for(int x:k[i])
        cout<<x<<" ";
        cout<<endl;
    }
    // substring("abc"," ");
    cout<<maxSubArraySum(arr,6);
    
}