#include<bits/stdc++.h>
using namespace std;

//resursive approach(navie solution)......

int sum(int arr[],int start,int end){
    int sum=0;
    for(int i=start;i<=end;i++)
    sum+=arr[i];
    return sum;
}

int minpages(int arr[],int size,int k){
    int res=INT_MAX;
    if(k==1) return sum(arr,0,size-1);
    if(size==1) return arr[0];
    for(int i=1;i<size;i++){
        res=min(res,max(minpages(arr,size-i,k-1),sum(arr,size-i,size-1)));
//or    res=min(res,max(minpages(arr,i,k-1),sum(arr,i,size-1)));
    } return res;
}
// recursive approach end here(navie solution).......


// binary search approach(efficient solution).......
bool feasible(int arr[],int size,int mid,int k){
int k1=1,sum=0;
for(int i=0;i<size;i++){
    if(sum+arr[i]>mid){
        k1++;
        sum=arr[i]; //remember this
    }else sum+=arr[i];
}
return(k1<=k);

}

int minpages1(int arr[],int size,int k){  // 
int low=0,high=0,ans=0;
for(int i=0;i<size;i++){
    high+=arr[i];
    if(low<arr[i]) low=arr[i];
}
while(low<=high){
    int mid=(low+high)/2;
    if(feasible(arr,size,mid,k)){
         ans=mid;
         high=mid-1;

    }else {
        low=mid+1;
    }
} return ans;

}



int main(){
 int arrs[]={10,20,30,40};
 int size=sizeof(arrs)/sizeof(arrs[0]);
 int k=2;
int pages=minpages1(arrs,size,k);
cout<<pages;
    return 0;
}