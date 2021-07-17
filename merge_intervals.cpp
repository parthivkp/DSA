#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    vector<vector <int> > ans;
    int n = intervals.size()-1;
    sort(intervals.begin(), intervals.end());
    
    int i = 0, j = i+1;
    ans.push_back(intervals[0]);

    while(n--)
    {
     
        if(ans[i][1] >= intervals[j][0] && ans[i][1] <= intervals[j][1])
            ans[i][1] = intervals[j][1];

        else if(ans[i][1] >= intervals[j][0] && ans[i][1] >= intervals[j][1])
            ans[i][1] = ans[i][1];
        else
        {
            i++;
            ans.push_back(intervals[j]);
        }
        j++;
    }
    return ans;
}
int main(){
vector<vector<int>> k{{1,2},{4,8},{5,9}};
k=merge(k);
for(auto g:k){
cout<<"[";
for(auto h:g)
cout<<h<<" ";
cout<<"],";
}
    return 0;
}
