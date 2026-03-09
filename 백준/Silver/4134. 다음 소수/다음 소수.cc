#include <iostream>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if(n<=1)return false;
    if(n==2)return true;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main() {
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        while(!isPrime(N))N++;
        cout<<N<<'\n';
        
    }
    return 0;
}