#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

ll dp[101][101][101];

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int N,L,R;
    cin>>N>>L>>R;
    dp[1][1][1]=1;
    for(int i=2;i<=N;i++){
        for(int j=1;j<=i;j++){
            for(int k=1;k<=i;k++){
                dp[i][j][k]=(dp[i-1][j-1][k]+dp[i-1][j][k-1]+dp[i-1][j][k]*(i-2))%MOD;
            }
        }
    }
    cout<<dp[N][L][R];
    
    return 0;
}