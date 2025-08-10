#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n,m;
vector<pair<long long, long long>> v;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    cin >>n>>m;
    for(long long int i=0; i<n; i++){
        long long a, b;
        cin >> a >> b;
        if(a>b) v.push_back(make_pair(b, a));
    }
    if(v.empty()){
        cout<<m;
        return 0;
    }
    sort(v.begin(), v.end());

    long long sum=m;
    long long left=v[0].first;
    long long right=v[0].second;
    for(long long int i=1;i<v.size();i++){
        if(right<v[i].first){
            sum+=2*(right-left);
            left=v[i].first;
            right=v[i].second;
        }else{
            if(right<v[i].second) right=v[i].second;
        }
    }
    sum+=2*(right-left);
    cout<<sum;
    return 0;
}