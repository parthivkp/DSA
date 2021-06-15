#include <bits/stdc++.h>
using namespace std;
 
// this is intersection 
                                                                    //for union 
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])                                      //print for union
            i++;
        else if (arr2[j] < arr1[i])
            j++;                                                     // print for union
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";                                 // same
            i++;
            j++;
        }
    } // print the rest
     while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}
// or u can use sets like....

 int doUnion(int a[], int n, int b[], int m)  {
       set <int> hello;
       
       for(int i=0;i<n;i++){
           hello.insert(a[i]);
       }
       for(int i=0;i<m;i++){
           hello.insert(b[i]);
       }
       return hello.size();
    }
 

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}