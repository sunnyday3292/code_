#include <iostream>
#include <cstring>
using namespace std;
#define INF 1000000000

int n,map[16][16];
int dp[16][1<<16][10];

int dfs(int cur, int visit, int price){
    int &ret = dp[cur][visit][price];
    if(ret!=-1) return ret;
    ret=1;
    
    for (int i=0; i<n; i++){
        int p=map[cur][i];
        if ((visit & (1<<i)) == (1<<i))
            continue;
        if(p<price) continue;
        ret=max(ret,1+dfs(i,visit|(1<<i),p));
    }
    
    return ret;
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin>>n;
    for (int i=0; i<n; i++){
        string s;
        cin>>s;
        for (int j=0; j<n; j++){
            map[i][j]=s[j]-'0';
        }
    }
    memset(dp, -1, sizeof(dp));
    cout<<dfs(0,1,0);
    
    return 0;
}