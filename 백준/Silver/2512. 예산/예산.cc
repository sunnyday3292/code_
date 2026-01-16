#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int>v;

int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        int k;cin>>k;
        v.push_back(k);
    }
    cin>>M;

    sort(v.begin(),v.end());
    int l=0;int r=v[N-1];
    int res,sum;
    while(l<=r){
        sum=0;
        int mid=(l+r)/2;
        for(int i=0;i<N;i++){
            sum+=min(v[i],mid);
        }
        if(M>=sum){
            res=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<res;
    return 0;
}