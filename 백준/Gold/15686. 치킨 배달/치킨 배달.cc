#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int N,M;
int city[51][51];
vector<pair<int,int>>v;
vector<pair<int,int>>homes;
vector<pair<int,int>>points;
int ans=1e9;

int calc(){
    int res=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int mn=1e9;
            if(city[i][j]==1){
                for(auto p:points){
                    mn=min(abs(p.first-i)+abs(p.second-j),mn);
                }
                res+=mn;
            }
        }
    }
    return res;
}

void dfs(int idx){
    if(points.size()==M){
        ans=min(ans,calc());
        return;
    }
    for(int i=idx;i<v.size();++i){
        points.push_back(v[i]);
        dfs(i+1);
        points.pop_back();

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>city[i][j];
            if(city[i][j]==2)v.push_back({i,j});
            if(city[i][j]==1)homes.push_back({i,j});
        }
    }
    dfs(0);

    cout<<ans;
    return 0;
}