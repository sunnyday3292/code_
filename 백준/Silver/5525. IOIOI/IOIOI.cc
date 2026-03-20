#include <bits/stdc++.h>
using namespace std;

int N,M;
string S;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N>>M>>S;
    int cnt=0;
    int ans=0;
    for(int i=0;i<M-2;i++){
        if(S[i]=='I'&&S[i+1]=='O'&&S[i+2]=='I'){
            cnt++;
            if(cnt>=N)ans++;
            i++;
        }
        else cnt=0;
    }
    cout<<ans<<'\n';
    return 0;
}