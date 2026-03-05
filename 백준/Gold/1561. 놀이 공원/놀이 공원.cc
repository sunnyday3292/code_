#include <bits/stdc++.h>
using namespace std;
long long N,M;
long long low=1,high=60000000000;
vector<long long>v;

bool check(long long mid){
    long long counts=M;
    for(int i=0;i<v.size();i++)counts+=mid/v[i];
    return counts>=N;
}

int main() {
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    if(N<=M){
        cout<<N;
        return 0;
    }
    long long time=0;
    while(low<=high){
        long long mid=(low+high)/2;
        if(check(mid)){
            high=mid-1;
            time=mid;
        }
        else{
            low=mid+1;
        }
    }
    long long cnt=M;
    for(int i=0;i<M;i++){
        cnt+=(time-1)/v[i];
    }
    for(int i=0;i<M;i++){
        if(time%v[i]==0)cnt++;
        if(cnt==N){
            cout<<i+1;
              break;  
        }
    }
    return 0;
}