#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000

int R,C;
char Board[21][21];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
int ans=0;

void dfs(int x,int y, int mask, int depth){
    ans=max(ans,depth);
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||ny<0||nx>=R||ny>=C)continue;
        int nxt=Board[nx][ny]-'A';
        if(!(mask&(1<<nxt))){
            dfs(nx,ny,mask|(1<<nxt),depth+1);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>R>>C;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>Board[i][j];
        }
    }
    int start=Board[0][0]-'A';
    dfs(0,0,(1<<start),1);
    cout<<ans;

    return 0;
}