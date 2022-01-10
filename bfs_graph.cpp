#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> adj,int ver,int source){
    queue<int> p;
    bool a[ver]={false};
    p.push(source);
    a[source]=true;
    while(p.empty()==false){
    int u=p.front();p.pop();
    cout<<u<<" ";
  for(int j=0;j<ver;j++){
      if(adj[u][j]!=0&&a[j]==false){              //adjacent of u and not visited
          p.push(j);
          a[j]=true;
      }
  }

    }
}
void dfs(vector<vector<int>> adj,int ver,int source,bool a[]){
    
    a[source]=true;
    cout<<source<<" ";
    for(int j=0;j<ver;j++){
      if(adj[source][j]!=0&&a[j]==false){              //adjacent of u and not visited
          dfs(adj,ver,j,a);
      }
  }

}
bool dfscycle(vector<vector<int>> adj,int ver,int source,bool a[],int parent=-1){
    
    a[source]=true;
  //  cout<<source<<" ";
    for(int j=0;j<ver;j++){
      if(adj[source][j]!=0){ 
          if((a[j]==false))
           {
                if ((dfscycle(adj,ver,j,a,source)==true)) {   
          return true;                                                      //adjacent of u and not visited
      }}   else {
          if(j!=parent){
              
              return true;}
      } 
      }
  }
return false;
}

vector<int> dikstras(vector <vector <int> >arr,int v,int source){
    vector<int> dis(v,INT_MAX);
    bool finished[v]={false};
  //  finished[source]=true;
    dis[source]=0;
    for (int count=0;count<v-1;count++){ //v-1 times because last node will remain same as it will be relaxed
        // this is to find min elemnt which is not finilzed
        int u=-1;
        for(int i=0;i<v;i++){
            if(!finished[i]&&(u==-1||dis[i]<dis[u]))
            u=i;
        }// after selecting it finilized
        finished[u]=true;
        for(int j=0;j<v;j++){
            if(!finished[j]&&arr[u][j]!=0)
            dis[j]=min(dis[j],arr[u][j]+dis[u]);

        }



    }return dis;

}



int main(){ bool j[4]={false};
vector<vector<int>> arr;
vector<int> p{0,50,0,0};
vector<int> p1{50,0,30,0};
vector<int> p2{0,30,0,1};
vector<int> p3{9,0,20,0};
arr.push_back(p);
arr.push_back(p1);
 arr.push_back(p2);
 arr.push_back(p3);
cout<<dfscycle(arr,4,0,j,-1);
//  auto x=dikstras(arr,4,0);
//  for(auto u:x)
//  cout<<endl<<u<<" ";
    return 0;
}