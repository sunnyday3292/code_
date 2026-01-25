#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;

int main(){
    int N;
    cin>>N;
    string s;
    cin>>s;
    int dp[1001];
    fill(dp,dp+1001,INF);
    dp[0]=0;

    for(int i=0;i<N;i++){
        if(dp[i]==INF)continue;

        for(int j=i+1;j<N;j++){
            if((s[i]=='B'&&s[j]=='O')||(s[i]=='O'&&s[j]=='J')||(s[i]=='J'&&s[j]=='B')){
                int k=j-i;
                dp[j]=min(dp[j],dp[i]+k*k);
            }
        }
    }
    if(dp[N-1]==INF) cout<<-1;
    else cout<<dp[N-1];
    return 0;
}