#include <bits/stdc++.h>
using namespace std;
#define MAX 1e9

int N,M;
vector<pair<int,int>>graph[201];

void dijkstra(int start, vector<int>& dist, vector<int>& first){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    dist[start]=0;
    first[start]=start;
    pq.push({0,start});
    while(!pq.empty()){
        auto [cost,cur]=pq.top();
        pq.pop();
        if(cost > dist[cur]) continue;
        for(auto[next,w]:graph[cur]){
            if(dist[next]>cost+w){
                dist[next]=cost+w;
                pq.push({dist[next],next});
                if(cur==start)first[next]=next;
                else first[next]=first[cur];
            }
        }
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int from,to,time;
        cin>>from>>to>>time;
        graph[from].push_back({to,time});
        graph[to].push_back({from,time});
    }
    for(int i=1;i<=N;i++){
        vector<int>first(N+1);
        vector<int>dist(N+1,MAX);
        dijkstra(i,dist,first);
        for(int j=1;j<=N;j++){
            if(i==j)cout<<'-';
            else{
                cout<<first[j];
            }
            cout<<' ';
        }
        cout<<'\n';
    }
    return 0;
}