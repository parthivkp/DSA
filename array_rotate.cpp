#include <iostream>

using namespace std;

int gcd(int a, int b)
{
 if(b==0)
  return a;
 else
  return gcd(b, a%b);
}

void ArrayRotate (int A[], int n, int k)
{
  int d=0;
 int i,temp,j;
 for(i=0;i<gcd(n,k);i++)
 {
  j=i;
  temp=A[i];
  while(1)
  {                       //  8 2 3 4 5 6 7 8    
   d=(j+(k))%n; //right --->rotate  d=(j+(n-k))%n;
   
   if(d==i)    //stop condtion
    break;
   A[j]=A[d];
   j=d; 
  }
  A[j]=temp;   
 }
}

void displayArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" ";
 cout<<"\n";
}

int main()
{
  int n,i,k;
  int arr[]={1,2,3,4,5,6,7,8};
   n=sizeof(arr)/sizeof(arr[0]);
  k=1;
  ArrayRotate(arr,n,k);
  displayArray(arr,n);
  return 0;
}
 //using stl
 
// int main(void)
// { vector<int> k{1,2,3,4,5};
// rotate(k.begin(),k.begin()+k.size()-2,k.end()); // for left rotate just k.begin()-2
// for(auto ko:k){
//     cout<<ko<<" ";
// }
   
//     return 0;
// }