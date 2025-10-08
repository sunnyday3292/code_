#include <bits/stdc++.h>
using namespace std;
int N;
int W[11][11];
bool visited[11];
int ans=1e9;

void TSP(int start, int now, int cost, int count){
    if(count==N&&W[now][start]>0){
        ans=min(ans,cost+W[now][start]);
        return;
    }
    for(int nxt=0;nxt<N;nxt++){
        if(!visited[nxt]&&W[now][nxt]>0){
            visited[nxt]=true;
            TSP(start,nxt,cost+W[now][nxt],count+1);
            visited[nxt]=false;
        }
    }
}

int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>W[i][j];
        }
    }
    for(int i=0;i<N;i++){
        fill(visited,visited+N,false);
        visited[i]=true;
        TSP(i,i,0,1);
    }
    cout<<ans;
    return 0;
}