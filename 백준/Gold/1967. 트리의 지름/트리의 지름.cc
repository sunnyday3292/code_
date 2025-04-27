#include<iostream>
#include<vector>
#include<cstring>
using namespace std;;
int n;
int ans=0;
int last;

void dfs(const vector<pair<int,int>> v[],bool visited[],int p, int len){
    if(visited[p]) return;
    visited[p]=true;
    if(ans<len){
        ans=len;
        last=p;
    }
    for(int i=0;i<v[p].size();i++){
        dfs(v,visited,v[p][i].first,len+v[p][i].second);
    }
}
int main(){
    cin>>n;
    vector<pair<int,int>>v[n+1];
    bool visited[n+1]={false,};
    int p,c,w;
    for(int i=0;i<n-1;i++){
        cin>>p>>c>>w;
        v[p].push_back({c,w});
        v[c].push_back({p,w});
    }
    dfs(v,visited,1,0);
    ans=0;
    memset(visited,false,sizeof(visited));
    dfs(v,visited,last,0);
    cout<<ans;
    return 0;
}