#include <bits/stdc++.h>
using namespace std;
vector<int>p;

bool isPrime(int n){
    for(int k:p){
        if(k*k>n)break;
        if(n%k==0)return false;
    }
    p.push_back(n);
    return true;
}

int main()
{
    int m,n,ret=-1;
    int sum=0;
    cin>>m>>n;
    p.push_back(2);
    for(int i=3;i<=n;i++){
        isPrime(i);
    }
    for(int x:p){
        if(x<m)continue;
        if(x>n)break;
        if(ret==-1)ret=x;
        sum+=x;
    }
    if(sum==0)cout<<-1;
    else cout<<sum<<'\n'<<ret<<'\n';
    
    return 0;
}