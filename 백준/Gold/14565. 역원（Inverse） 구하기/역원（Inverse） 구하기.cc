#include <iostream>
#include <tuple>
using namespace std;
#define ll long long

tuple<ll,ll,ll> extended_gcd(ll a, ll b){
    if(b==0){
        return tuple<ll,ll,ll>(1,0,a);
    }
    ll x1=1, y1=0, r1=a;
    ll x2=0, y2=1, r2=b;
    while(r2!=0){
        ll q=r1/r2;
        ll rt=r1-q*r2;
        ll xt=x1-q*x2;
        ll yt=y1-q*y2;
        x1=x2;y1=y2;r1=r2;
        x2=xt;y2=yt;r2=rt;
    }
    return tuple<ll,ll,ll>(x1,y1,r1);
}

int main() {
    ll n,a;cin>>n>>a;
    cout<<n-a<<" ";
    auto [x,y,r]=extended_gcd(a,n);
    if(r!=1)cout<<-1;
    else{
        if(x<0)cout<<(x%n+n);
        else cout<<x;
    }
    return 0;
}