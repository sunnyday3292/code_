#include<iostream>
#include<math.h>
using namespace std;;

int dp[46];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i==0)dp[i]=0;
        else if(i==1)dp[i]=1;
        else dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    
}