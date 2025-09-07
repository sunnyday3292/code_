#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int visited[1001][1001];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int N, M;
queue<pair<int, int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(visited, 0, sizeof(visited));
    cin >> M >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                q.push({i, j});
        }
    }
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && arr[nx][ny] == 0 && visited[nx][ny] == 0)
            {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(visited[i][j]==0&&arr[i][j]==0){
                cout<<-1<<"\n";
                return 0;
            }
            ans = max(ans, visited[i][j]);
        }
    }
    cout << ans << "\n";
    return 0;
}