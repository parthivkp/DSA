#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void topologicalsort(stack <int>&s,bool visited[],int source,int V,vector<vector<int>> k){
visited[source]=true;

for(int v=0;v<V;v++){
if(!visited[v]&&k[source][v]!=0){
    topologicalsort(s,visited,v,V,k);
    
}
}s.push(source);
}
vector<vector<int>> transpose(vector<vector<int>> k,int V){
 vector<vector<int>> trans;
 for(int i=0;i<V;i++){
     vector<int>p(5,0);
     trans.push_back(p);
 }  
for(int i=0;i<V;i++)
for(int j=0;j<V;j++){
trans[j][i]=k[i][j];

}
return trans;
}
void dfs(int source,bool a[],int ver,vector<vector<int>> adj){
   
    a[source]=true;
    cout<<source<<" ";
    for(int j=0;j<ver;j++){
      if(adj[source][j]!=0&&a[j]==false){              //adjacent of u and not visited
          dfs(j,a,ver,adj);
      }
  }

}
int main(){
    int V=5;
stack<int> s;
bool visited[V]={false};
vector<vector<int>> k{
{0,0,1,1,0},
{1,0,0,0,0},
{0,1,0,0,0},
{0,0,0,0,1},
{0,0,0,0,0}
};
topologicalsort(s,visited,0,V,k);

 vector<vector<int>>h=transpose(k,5);

 
bool visited2[V]={false};
 
 while(s.empty()==false){
     
      int v=s.top();
      s.pop();
     if(!visited2[v]){
         
     dfs(v,visited2,V,h);
     cout<<endl;
     }
     
 }
 
    return 0;
}