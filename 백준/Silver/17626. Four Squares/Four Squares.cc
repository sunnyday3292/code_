#include <iostream>
#include <cmath>
using namespace std;
int dp[50001];
int main() {
    int n;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int mn=1e9;
        for(int j=1;j*j<=i;j++){
            mn=min(dp[i-j*j]+1,mn);
        }
        dp[i]=mn;
    }
    //for(int i=1;i<=n;i++)cout<<i<<" : "<<dp[i]<<"\n";
    cout<<dp[n];
    return 0;
}