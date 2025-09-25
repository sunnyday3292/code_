#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>clauses;

bool check(vector<int>&assignment){
    for(auto[a,b]:clauses){
        bool x=(a>0?assignment[a]:!assignment[-a]);
        bool y=(b>0?assignment[b]:!assignment[-b]);
        if(!(x||y))return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N,M;
    cin>>N>>M;
    clauses.resize(M);
    for(int i=0;i<M;i++){
        cin>>clauses[i].first>>clauses[i].second;
    }
    vector<int>assignment(N+1,0);
    for(int mask=0;mask<(1<<N);mask++){
        for(int i=1;i<=N;i++){
            assignment[i]=(mask>>(i-1)&1);
        }
        if(check(assignment)){
            cout<<1<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
    
    return 0;
}