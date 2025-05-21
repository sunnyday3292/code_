#include <iostream>
#include <deque>
using namespace std;

int map[501][501]={0,}; 
int visit[501][501];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};


void bfs(){
    deque<pair<int,int>>dq;
    dq.push_front({0,0});
    visit[0][0]=0;

    while(!dq.empty()){
        int y=dq.front().first;
        int x=dq.front().second;
        dq.pop_front();
        for(int i=0;i<4;i++){
            int ny=y+dy[i];
            int nx=x+dx[i];

            if(nx>=0&&nx<=500&&ny>=0&&ny<=500){
                if (map[ny][nx] == 2) continue;
                if(visit[ny][nx]>visit[y][x]&&map[ny][nx]==0) {
                    visit[ny][nx]=visit[y][x];
                        dq.push_front({ny,nx});
                }
                else if(visit[ny][nx]>visit[y][x]+1&&map[ny][nx]==1){
                    visit[ny][nx]=visit[y][x]+1;
                    dq.push_back({ny,nx});
                }
            }
        }
        
    }
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int x1,y1,x2,y2;
    int minx,maxx,miny,maxy;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        minx = min(x1, x2);
        maxx = max(x1, x2);
        miny = min(y1, y2);
        maxy = max(y1, y2);
        for(int j=minx;j<=maxx;j++){
            for(int k=miny;k<=maxy;k++){
                map[j][k]=1;//1은 위험구역
            }
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        minx = min(x1, x2);
        maxx = max(x1, x2);
        miny = min(y1, y2);
        maxy = max(y1, y2);
        for(int j=minx;j<=maxx;j++){
            for(int k=miny;k<=maxy;k++){
                map[j][k]=2; //2는 죽음구역
            }
        }
    }
    for (int i = 0; i <= 500; i++) {
        for (int j = 0; j <= 500; j++) {
            visit[i][j] = 987654321;
        }
    }
    bfs();
    if(visit[500][500]==987654321) cout<<-1;
    else cout<<visit[500][500];
 
    return 0;
}