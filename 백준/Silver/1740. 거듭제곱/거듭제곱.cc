#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N;
    cin >> N;
    string tmp=bitset<64>(N).to_string();
    ll res=0;
    ll seq=1;
    for(int i=tmp.length()-1;i>=0;i--){
        if(tmp[i]=='1'){
            res+=seq;
        }
        seq*=3;
    }
    cout<<res;
    

    return 0;
}