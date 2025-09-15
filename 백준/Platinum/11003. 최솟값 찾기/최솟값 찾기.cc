#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int>pi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,L;
    cin>>N>>L;
    deque<pi>dq;
    for(int i=0;i<N;i++){
        int t; 
        cin>>t;
        while(!dq.empty()&&dq.front().second<i-L+1)dq.pop_front();
        while(!dq.empty()&&dq.back().first>=t)dq.pop_back();
        dq.push_back({t,i});
        cout<<dq.front().first<<" ";
    }
    return 0;
}