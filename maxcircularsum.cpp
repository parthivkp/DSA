#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[],int size){
    int maxsofar=INT_MIN,sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(sum>maxsofar)
        maxsofar=sum;
        if(sum<0)
        sum=0;
    }return maxsofar;

}


int main(){
    int arr[]={8,-4,3,-5,4};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxi=maxsum(arr,size);
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        arr[i]=-arr[i];
    }
    int circularsum=sum+maxsum(arr,size);
    cout<<max(circularsum,maxi);
   
    return 0;
}