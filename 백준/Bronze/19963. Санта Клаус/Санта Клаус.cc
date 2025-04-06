#include <iostream>
#include <cmath>
using namespace std;;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int first; int second;
    bool check[n+1];
    fill(check, check + n + 1, true);
    for(int i=0;i<m;i++) {
        cin>>first;
        check[first]=false;
    }
    for(int i=0;i<k;i++){
        cin>>second;
        check[second]=false;
    }
    cout<<n-(m+k)<<"\n";
    for(int i=1;i<=n;i++){
        if(check[i])cout<<i<<" ";
    }
}