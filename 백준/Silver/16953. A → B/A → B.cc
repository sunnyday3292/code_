#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;
typedef long long ll;
int A,B;
queue<pair<ll,ll>>q;
unordered_set<ll> visited;

ll bfs(){
    q.push({A,1});
    while(!q.empty()){
        auto node=q.front();
        q.pop();
        
        ll nxt=node.first;
        ll cnt=node.second;
        if(nxt==B)return cnt;
        
        if((visited.find(2*nxt)==visited.end())&&2*nxt<=B){
            q.push({2*nxt,cnt+1});
            visited.insert(2*nxt);
        }
        string s=to_string(nxt)+"1";
        ll to=stol(s);
        if((visited.find(to)==visited.end())&&to<=B){
            q.push({to,cnt+1});
            visited.insert(to);
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cin>>A>>B;
    cout<<bfs();
    return 0;
}