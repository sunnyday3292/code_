#include<iostream>
using namespace std;
#define MOD 1000000009
int dp[1000001];

int main(){
    ios::sync_with_stdio(false);
		cin.tie(0);
    
    int T; cin>>T;
    dp[1]=1; dp[2]=2;dp[3]=4;
    
    for(int i=4;i<=1000000;i++){
        dp[i]=((dp[i-1]+dp[i-2])%MOD+dp[i-3])%MOD;
    } 
    while(T--){
        int n; cin>>n;
        cout<<dp[n]<<"\n";     
    }
    return 0;
}