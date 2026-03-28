#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[101][101];
queue<pair<int, int>> q;
int ans = 0;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void dfs(int x, int y)
{
    if (arr[x][y] == 0)
        arr[x][y] = -1;
    else
        return;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M)
            dfs(nx, ny);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    dfs(0, 0);
    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] == 1)
                {
                    int cnt = 0;
                    for (int d = 0; d < 4; d++)
                    {
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        if (arr[nx][ny] == -1)
                            cnt++;
                    }
                    if (cnt >= 2)
                        q.push({i, j});
                }
            }
        }
        if (q.empty())
            break;
        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            arr[x][y] = -1;
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (arr[nx][ny] == 0)
                    dfs(nx, ny);
            }
        }
        ans++;
    }
    cout << ans;
    return 0;
}