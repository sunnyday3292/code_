#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;;

long long int phi(long long int n){
    long long int ans=n;
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans=ans-ans/i;
        }
    }
    if(n>1) ans-=ans/n;
    return ans;
}
int main(){
    long long int n;
    cin>>n;
    while(n!=0){
        if(n==1)cout<<0<<"\n";
        else cout<<phi(n)<<"\n";
        cin>>n;
    }
    return 0;
}