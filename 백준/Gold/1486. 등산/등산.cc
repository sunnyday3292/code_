#include <bits/stdc++.h>
using namespace std;
#define MAX 1e9

int N,M,T,D;
int m[26][26];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};


vector<vector<int>> dijkstra(bool isRev){
    vector<vector<int>>dist(N,vector<int>(M,MAX));
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
    dist[0][0]=0;
    pq.push({0,0,0});
    while(!pq.empty()){
        auto [cost,x,y]=pq.top();
        pq.pop();
        if(cost>dist[x][y])continue;
        for(int d=0;d<4;d++){
            int nx=x+dx[d];
            int ny=y+dy[d];
            if(nx<0||ny<0||nx>=N||ny>=M)continue;
            int diff=abs(m[nx][ny]-m[x][y]);
            if(diff>T)continue;
            int ncost;
            if(!isRev){
                if(m[nx][ny]<=m[x][y])ncost=1;
                else ncost=diff*diff;
            }
            else{
                if(m[x][y]<=m[nx][ny])ncost=1;
                else ncost=diff*diff;
            }
            if(dist[nx][ny]>cost+ncost){
                dist[nx][ny]=cost+ncost;
                pq.push({dist[nx][ny],nx,ny});
            }
        }
    }
    return dist;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N>>M>>T>>D;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            char c;
            cin>>c;
            if(c<='Z')m[i][j]=c-'A';
            else m[i][j]=c-'a'+26;
        }
    }
    auto go = dijkstra(false);
    auto back = dijkstra(true);

    int ans=m[0][0];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(go[i][j]+back[i][j]<=D)ans=max(ans,m[i][j]);
        }
    }
    cout<<ans;
    return 0;
}