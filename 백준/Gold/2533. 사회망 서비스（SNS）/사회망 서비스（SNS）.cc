#include <bits/stdc++.h>
using namespace std;

vector<int> tree[1000001];
bool visited[1000001];
int dp[1000001][2];

void dfs(int cur) {
    if(visited[cur]) return;
    visited[cur]=1;
    dp[cur][0]=0; dp[cur][1]=1;
    for(int next : tree[cur]){
        if(visited[next]) continue;
        dfs(next);
        dp[cur][0]+=dp[next][1];
        dp[cur][1]+=min(dp[next][1],dp[next][0]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dfs(1); cout<<min(dp[1][0],dp[1][1]);

    return 0;
}