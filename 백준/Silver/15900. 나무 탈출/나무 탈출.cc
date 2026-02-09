#include <bits/stdc++.h>
using namespace std;

int N,h=0;
vector<int> graph[500001];
bool visited[500001];

void dfs(int v,int d){
    if(graph[v].size()==1&&v!=1){
        if(d&1)h++;
        return;
    }
    visited[v]=true;
    for(auto nxt:graph[v]){
        if(!visited[nxt])dfs(nxt,d+1);
    }
}
int main() {
    cin>>N;
    for(int i=0;i<N-1;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,0);
    if(h%2==0)cout<<"No";
    else cout<<"Yes";
    return 0;
}