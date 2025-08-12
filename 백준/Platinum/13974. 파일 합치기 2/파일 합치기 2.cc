#include <iostream>
using namespace std;
int T, K;
long long C[5001];
long long sum[5001];
long long dp[5001][5001];
long long opt[5001][5001];

int main() {
    cin>>T;
    while(T--){
        cin>>K;
    
        for(int i=1;i<=K;i++){
            cin>>C[i];
            sum[i]=sum[i-1]+C[i];
        }
        for (int i = 0; i <= K; i++) {
            for (int j = 0; j <= K; j++) {
                dp[i][j] = 0;
                opt[i][j] = 0;
            }
        }
        for(int i=1;i<=K;i++){
            dp[i-1][i]=0;
            opt[i-1][i]=i;
        }
        for(int d=2;d<=K;d++){
            for(int i=0;i+d<=K;i++){
                int j=i+d;
                dp[i][j]=2e9;
                for(int a=opt[i][j-1];a<=opt[i+1][j];a++){//크누스 최적화
                    int v=dp[i][a]+dp[a][j]+sum[j]-sum[i];
                    if(dp[i][j]>v){
                        dp[i][j]=v;
                        opt[i][j]=a;
                    }
                }
            }
        }
        cout<<dp[0][K]<<"\n";
    }
    return 0;
}