#include <bits/stdc++.h>
using namespace std;

int R,C,K;
char adj[6][6];
bool visited[6][6]={false,};
int cnt=0;

bool dfs(int x,int y,int depth) {
    if(x==0&&y==C-1&&depth==K){
        cnt++;
        return true;
    }

    if(x+1<R&&!visited[x+1][y]&&adj[x+1][y]!='T'){
        visited[x+1][y]=true;
        dfs(x+1,y,depth+1);
        visited[x+1][y]=false;
    }
    if(x-1>=0&&!visited[x-1][y]&&adj[x-1][y]!='T'){
        visited[x-1][y]=true;
        dfs(x-1,y,depth+1);
        visited[x-1][y]=false;
    }
    if(y+1<C&&!visited[x][y+1]&&adj[x][y+1]!='T'){
        visited[x][y+1]=true;
        dfs(x,y+1,depth+1);
        visited[x][y+1]=false;
    }
    if(y-1>=0&&!visited[x][y-1]&&adj[x][y-1]!='T'){
        visited[x][y-1]=true;
        dfs(x,y-1,depth+1);
        visited[x][y-1]=false;
    }
    return false;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>R>>C>>K;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>adj[i][j];
        }
    }
    visited[R-1][0]=true;
    dfs(R-1,0,1);
    cout<<cnt;


    return 0;
}