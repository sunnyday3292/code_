#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<vector<int>>v;
int ans=1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int sum=0;
    v.resize(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int b=0;b<(1<<n);b++){
        vector<int>t1,t2;
        for(int i=0;i<n;i++){
            if(b&(1<<i)) t1.push_back(i);
            else t2.push_back(i);
        }
    
        int s1=0,s2=0;
        for(int i=0;i<t1.size();i++){
            for(int j=0;j<t1.size();j++){
                s1+=v[t1[i]][t1[j]];
            }
        }
        for(int i=0;i<t2.size();i++){
            for(int j=0;j<t2.size();j++){
                s2+=v[t2[i]][t2[j]];
            }
        }
        ans=min(ans,abs(s1-s2));
    }
    cout<<ans;
    
    return 0;
}