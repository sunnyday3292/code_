#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<pair<int,int>>v;
vector<int>ans,idx;
vector<int>x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    ans.push_back(v.front().second);
    idx.push_back(0);
    for(int i=1;i<v.size();i++){
        int next=v[i].second;
        if(ans.back()<next){
            ans.push_back(next);
            idx.push_back(ans.size()-1);
        }
        else{
           vector<int>::iterator iter = lower_bound(ans.begin(), ans.end(), next);
			*iter = next;
			idx.push_back(iter - ans.begin());
        }
    }
    cout<<v.size()-ans.size()<<"\n";
    int k = ans.size()-1;
    for(int i=idx.size()-1;i>=0;i--){
        if(k==idx[i]){
            k--;
        }
        else x.push_back(v[i].first);
    }
    sort(x.begin(),x.end());
    for(int i:x)cout<<i<<"\n";
    return 0;
}