#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,pair<string,int>>p1, pair<int,pair<string,int>>p2){
    if(p1.first==p2.first)return p1.second.second<p2.second.second;
    return p1.first<p2.first;
    
}

int main() {
    int N;
    cin>>N;
    int age;
    string name;
    vector<pair<int,pair<string,int>>>v;
    for(int i=0;i<N;i++){
        cin>>age>>name;
        v.push_back(make_pair(age,make_pair(name,i)));
    }
    sort(v.begin(),v.end(),cmp);
    for(auto k:v)cout<<k.first<<" "<<k.second.first<<"\n";
    
    return 0;
}