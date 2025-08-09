#include <iostream>
using namespace std;
int T,K;
int main() {
    cin>>T;
    while(T--){
        cin>>K;
        int C[501];
        long long sum[501];
        sum[0]=0;
        long long dp[501][501];
        long long opt[501][501];
    
        for(int i=1;i<=K;i++){
            cin>>C[i];
            sum[i]=sum[i-1]+C[i];
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