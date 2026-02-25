#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    vector<int>S(N);
    for (int i = 0; i < N; i++)
        cin >> S[i];
    int l=0,cnt=0,mx=0;
    for(int r=0;r<N;r++){
        if(S[r]%2!=0)cnt++;
        while(cnt>K){
            if(S[l]%2!=0)cnt--;
            l++;
        }
        mx=max(mx,(r-l+1)-cnt);
    }
    cout<<mx;

    return 0;
}