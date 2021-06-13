// C++ program to find a pair with a given sum in a sorted and
// rotated array
#include<iostream>
using namespace std;
 
// This function returns true if arr[0..n-1] has a pair
// with sum equals to x.
bool pairInSortedRotated(int arr[], int n, int x)
{
    // Find the pivot element
    int i;
    for (i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            break;
    int l = (i+1)%n;  // l is now index of smallest element
    int r = i;        // r is now index of largest element
 
    // Keep moving either l or r till they meet
    while (l != r)
    {
         // If we find a pair with sum x, we return true
         if (arr[l] + arr[r] == x)
              return true;
 
         // If current pair sum is less, move to the higher sum
         if (arr[l] + arr[r] < x)
             { l++;
             if(l==n)
             l=0;
             cout<<l<<endl;}
         else  // Move to the lower sum side
         // if reachers 1st element then go to last element
              r--;
              if(r==-1)
              r=n-1;
    }
    return false;
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    if (pairInSortedRotated(arr, n, sum))
        cout << "Array has two elements with sum 16";
    else
        cout << "Array doesn't have two elements with sum 16 ";
 
    return 0;
}