#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;;
int M[101];
int C[101];
int dp[101][10001];
int sum;

int solve(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j-C[i]>=0){
                dp[i][j]=max(dp[i][j],dp[i-1][j-C[i]]+M[i]);
            }
            dp[i][j]=max(dp[i-1][j],dp[i][j]);
        }
    }
    for(int i=0;i<=sum;i++){
        if(dp[n][i]>=m){
            return i;
        }
    }
    return 0;
    
}
int main() {
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>M[i];
    }
    sum=0;
    for(int i=1;i<=n;i++){
        cin>>C[i];
        sum+=C[i];
    }
    cout<<solve(n,m);
    return 0;
}