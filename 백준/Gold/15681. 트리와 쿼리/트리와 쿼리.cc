#include <iostream>
#include <vector>
using namespace std;

int N,R,Q;
vector<int>graph[100001];
int parent[100001];
bool visited[100001];
int subsize[100001];

void makeTree(int cur){
    visited[cur]=true;
    subsize[cur]=1;
    for(int next:graph[cur]){
        if(!visited[next]){
            parent[next]=cur;
            makeTree(next);
            subsize[cur]+=subsize[next];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>N>>R>>Q;
    while(--N){
        int u,v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    makeTree(R);
    while(Q--){
        int U;
        cin>>U;
        cout<<subsize[U]<<"\n";
    }
    return 0;
}