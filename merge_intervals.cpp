#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) 
{ int res=1;
    vector<vector <int> > ans;
    int n = intervals.size()-1;
    sort(intervals.begin(), intervals.end());
    int a=1;
    int i = 0, j = i+1;
    ans.push_back(intervals[0]);

    while(n--)
    {
      if(ans[i][1] >= intervals[j][0]){res++; if(res>a) a=res;
             ans[i][1] = max(ans[i][1],intervals[j][1]);}

        // if(ans[i][1] >= intervals[j][0] && ans[i][1] <= intervals[j][1])
        //     ans[i][1] = intervals[j][1];

        // else if(ans[i][1] >= intervals[j][0] && ans[i][1] >= intervals[j][1])
        //     ans[i][1] = ans[i][1];
        else
        { res=1;
            i++;
            ans.push_back(intervals[j]);
        }
        j++;
    } cout<<endl<<a<<endl;
    return ans;
}
int main(){
vector<vector<int>> k{{800,840},{700,820},{600,830},{500,530}};
k=merge(k);

for(auto g:k){
cout<<"{";
for(auto h:g)
cout<<h<<",";
cout<<"},";

}
    return 0;
}
