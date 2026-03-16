#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        int res=0;
        res=max(res,v[1]-v[0]);
        res=max(res,v[n-1]-v[n-2]);
        for(int i=0;i<n-2;i++){
            res=max(res,v[i+2]-v[i]);
        }
        cout<<res<<'\n';
        
    }
    return 0;
}