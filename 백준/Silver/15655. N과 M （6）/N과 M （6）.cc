#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[9];
bool visited[9]={false};
vector<int>v;
int digit(int k){
    string s=to_string(k);
    return s.size();
}
void dfs(int depth) {
    if(depth==M){
        for(int i=1;i<v.size();i++ )cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=0;i<N;i++){
        if(!visited[i]){
            if(v.back()<arr[i]) {
                visited[i]=true;
                v.push_back(arr[i]);
                dfs(depth+1);
                v.pop_back();
                visited[i]=false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>N>>M;
    for(int i=0;i<N;i++)cin>>arr[i];
    sort(arr,arr+N);
    v.push_back(0);
    dfs(0);


    return 0;
}