#include <iostream>
#include<vector>
using namespace std;
int N,M;
vector<int>graph[10001];
bool visited[10001]={false,};

int dfs(int start){
    visited[start]=true;
    for(int i=0;i<graph[start].size();i++){
        if(!visited[graph[start][i]]){
            visited[graph[start][i]]=true;
            dfs(graph[start][i]);
        }
    }
    return 1;
}
int main() {
    cin>>N>>M;
    while(M--){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cnt=0;
    for(int i=1;i<=N;i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}