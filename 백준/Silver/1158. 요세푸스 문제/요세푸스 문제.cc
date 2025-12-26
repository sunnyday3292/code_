#include <iostream>
#include<queue>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    queue<int>q;
    cout<<'<';
    for(int i=1;i<=N;i++)q.push(i);
    while(!q.empty()){
    for(int j=1;j<K;j++){
        int d = q.front();
        q.pop();
        q.push(d);
    }
        int a = q.front();
        q.pop();
        if(q.size()==0)cout<<a;
        else cout<<a<<','<<' ';
    }
    cout<<'>';
    return 0;
}