#include <bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int>a,pair<int ,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;

}

int main(void)
{// vector<pair<int,int>> knap{{120,30},{100,20},{60,10}};
 vector<pair<int,int>> knap{{600,50},{500,20},{400,30}};
int w=70,res=0;
//sort by value per unit weight
sort(knap.begin(),knap.end(),mycmp);
// for(auto x:knap){
//     cout<<x.first<<"->"<<x.second<<endl;
// }
for(int i=0;i<knap.size();i++){

if(knap[i].second<=w){
    res=res+knap[i].first;
    w=w-knap[i].second;
}else{ //take fraction formula for 120 value weight is 30 for w weight how much is value
// 120->30
// ?--->w   120*w/30
res=res+(knap[i].first)*double(w)/knap[i].second;
break;
}
} cout<<res;
    return 0;
}