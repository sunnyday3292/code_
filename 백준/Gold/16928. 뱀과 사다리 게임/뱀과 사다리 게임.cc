#include <bits/stdc++.h>
using namespace std;

int N, M;
int snake[101];
int ladder[101];
bool visited[101];

void bfs()
{
    queue<pair<int, int>> q;
    q.push({1, 0});
    visited[1] = true;
    while (!q.empty())
    {
        auto [cur, cnt] = q.front();
        q.pop();

        if (cur == 100)
        {
            cout << cnt << '\n';
            break;
        }

        for (int i = 1; i <= 6; i++)
        {
            if ((cur + i) > 100)
                continue;
            if (snake[cur + i] != 0)
            {
                q.push({snake[cur + i], cnt + 1});
                visited[snake[cur + i]] = true;
            }
            else if (ladder[cur + i] != 0)
            {
                q.push({ladder[cur + i], cnt + 1});
                visited[ladder[cur + i]] = true;
            }
            else
            {
                if (!visited[cur + i])
                {
                    q.push({cur + i, cnt + 1});
                    visited[cur + i] = true;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    memset(snake, 0, sizeof(snake));
    memset(ladder, 0, sizeof(ladder));
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        ladder[x] = y;
    }
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        snake[u] = v;
    }
    bfs();

    return 0;
}