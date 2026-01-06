#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    int arr[10001];
    priority_queue<int,vector<int>,greater<int>> pq;
    
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<M;i++){
        pq.push(0);
    }
    sort(arr,arr+N,greater<int>());
    
    int mx=0;
    for(int i=0;i<N;i++){
        int k=pq.top()+arr[i];
        pq.pop();
        pq.push(k);

        mx=max(k,mx);
    }
    cout<<mx;
    return 0;
}