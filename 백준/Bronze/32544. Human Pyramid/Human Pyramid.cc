#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin>>N;
    if(N==1){
        cout<<1;
        return 0;
    }
    for(ll i=1;i<=N;i++){
        if(i*(i+1)/2>N){
            cout<<i-1;
            break;
        }
    }
    return 0;
}