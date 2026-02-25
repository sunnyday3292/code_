#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<long long>train(N+1,0);
    for (int j = 0; j < M; j++){
        int ord,i,x;
        cin>>ord;
        if(ord==1){
            cin>>i>>x;
            train[i]|=(1<<x);
        }
        else if(ord==2){
            cin>>i>>x;
            train[i]&=~(1<<x);
        }
        else if(ord==3){
            cin>>i;
            train[i]=train[i]<<1;
            train[i]&=((1<<21)-1);
        }
        else if(ord==4){
            cin>>i;
            train[i]=train[i]>>1;
            train[i]&=~1;
        }
    }
    vector<bool>visited(1<<21,false);
    int ans=0;
    for(int i=1;i<=N;i++){
        if(visited[train[i]]==false)ans++;
        visited[train[i]]=true;
    }
    cout<<ans;

    return 0;
}