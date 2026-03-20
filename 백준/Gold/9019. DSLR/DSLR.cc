#include <bits/stdc++.h>
using namespace std;

int A,B;
bool visited[10001];

void solve(int A,int B){
    queue<pair<int,string>> q;
    q.push({A,""});
    visited[A]=true;

    while(!q.empty()){
        int cur = q.front().first;
        string str = q.front().second;
        q.pop();

        if(cur == B){
            cout << str;
            return;
        }
        int d = (cur*2)%10000;
        if(!visited[d]){
            visited[d]=true;
            q.push({d, str+"D"});
        }
        int s = (cur==0 ? 9999 : cur-1);
        if(!visited[s]){
            visited[s]=true;
            q.push({s, str+"S"});
        }
        int l = (cur%1000)*10 + (cur/1000);
        if(!visited[l]){
            visited[l]=true;
            q.push({l, str+"L"});
        }
        int r = (cur%10)*1000 + (cur/10);
        if(!visited[r]){
            visited[r]=true;
            q.push({r, str+"R"});
        }
    }
    cout<<q.front().second;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        memset(visited,false,sizeof(visited));
        cin>>A>>B;
        solve(A,B);
        cout<<'\n';
    }
    return 0;
}