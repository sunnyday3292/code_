#include <iostream>
#include<cstring>
#include<utility>
#include<queue>
using namespace std;

int N, M;
bool arr[100][100];
bool check[100][100];
int dist[100][100];
int dx[4] = { 0,1,-1,0 };
int dy[4] = { 1,0,0,-1 };

int bfs(int a,int b) {

    queue<pair<int,int>> q;
    q.push({ 0,0 });
    check[0][0] = true;
    dist[0][0] = 1;

    while (!q.empty()) {
        int x=q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if (!check[next_x][next_y]&&next_y<M&&next_y>=0&&next_x>=0&&next_x<N&&arr[next_x][next_y]==1) {
                q.push({next_x,next_y});
                check[next_x][next_y] = true;
                dist[next_x][next_y] = dist[x][y] + 1;
            }
        }
    }
    return dist[a][b];

}
int main() {
        cin >> N>>M;
        memset(arr, 0, sizeof(arr));
        memset(check, 0, sizeof(check));

        for (int i = 0; i < N; i++) {
            string s;
            cin >> s;
            int j = 0;
            for (int k : s) {
                arr[i][j] = k-'0';
                j++;
            }
            
        }
        bfs(N - 1, M - 1);
        cout << dist[N-1][M-1]<<"\n";

}