#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void bridge(int u,bool visited[],int disc[],int parent[],int low[],vector<vector<int>> k){
static int time=0;
visited[u]=true;
disc[u]=low[u]=++time;
for(int v=0;v<5;v++){
    if(k[u][v]!=0 && !visited[v]){
        parent[v]=u;
        bridge(v,visited,disc,parent,low,k);
        low[u]=min(low[u],low[v]);
        if(low[v]>disc[u])
        cout<<u<<" "<<v<<endl;

    }else if(k[u][v]!=0 && v!=parent[u]){
        low[u]=min(low[u],disc[v]);
    }
}


}


int main(){
int parent[5]={-1};
bool visited[5]={false};
int disc[5];
int low[5];
vector<vector<int>> k{
{0,1,1,1,0},
{1,0,1,0,0},
{1,1,0,0,0},
{1,0,0,0,1},
{0,0,0,1,0}
};
bridge(0,visited,disc,parent,low,k);

    return 0;
}