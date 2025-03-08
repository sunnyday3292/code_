#include <iostream>
#include <cstring>
using namespace std;
#define INF 1000000000;

int n,map[16][16];
int dp[16][1<<16];
int dfs(int cur, int visit){
    if (visit == (1<<n)-1){ 
        if(map[cur][0] == 0)
            return INF;
        return map[cur][0];
    }
    
    if (dp[cur][visit] != -1) 
        return dp[cur][visit];
    
    dp[cur][visit] = INF;
    
    for (int i=0; i<n; i++){
        if (map[cur][i]==0)
            continue;
        if ((visit & (1<<i)) == (1<<i))
            continue;
        dp[cur][visit] = min(dp[cur][visit], map[cur][i] + dfs(i, visit | 1<<i));
    }
    
    return dp[cur][visit];
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>map[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout<<dfs(0,1);
    
    return 0;
}