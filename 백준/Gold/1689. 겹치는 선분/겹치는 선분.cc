#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;;
#define ll long long

int n;
vector<pair<ll,ll>>v;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,-1));
    }
    sort(v.begin(),v.end());
    ll cnt=0;
    ll ans=0;
    for(ll i=0;i<2*n;i++){
        cnt+=v[i].second;
        ans=max(cnt,ans);
    }
    cout<<ans;
    return 0;
}
