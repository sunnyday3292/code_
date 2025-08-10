#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int n,m;
int u,v;
int parent[100000][18];
int depth[100000];
vector<int>adj[100000];

void dfs(int cur){
    for(int next:adj[cur]){
        if(depth[next]==-1){
            parent[next][0]=cur;
            depth[next]=depth[cur]+1;
            dfs(next);
        }
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(parent,-1,sizeof(parent));
    fill(depth,depth+n,-1);
    depth[0]=0;
    dfs(0);
    for(int j=0;j<17;j++){
        for(int i=1;i<n;i++){
            if(parent[i][j]!=-1)parent[i][j+1]=parent[parent[i][j]][j];
        }
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        u--;v--;
    
        if(depth[u]<depth[v])swap(u,v);
        int diff=depth[u]-depth[v];
        for(int j=0;diff;j++){
            if(diff%2)u=parent[u][j];
            diff/=2;
        }
        if(u!=v){
            for(int j=17;j>=0;j--){
                if(parent[u][j]!=-1&&parent[u][j]!=parent[v][j]){
                    u=parent[u][j];
                    v=parent[v][j];
                }
            }
            u=parent[u][0];
        }
        cout<<u+1<<"\n";
    }
    return 0;
}