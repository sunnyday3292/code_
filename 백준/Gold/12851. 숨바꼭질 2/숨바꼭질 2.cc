#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<bool> visited(MAX + 1, false);

    queue<pair<int, int>> q;
    q.push({N, 0});

    int res = 1e9, how = 0;

    while (!q.empty())
    {
        auto [cur, cnt] = q.front();
        q.pop();

        visited[cur] = true;

        if (res < cnt)
            break;

        if (cur == K)
        {
            res = cnt;
            how++;
            continue;
        }

        if (cur - 1 >= 0 && !visited[cur - 1])
            q.push({cur - 1, cnt + 1});
        if (cur + 1 <= MAX && !visited[cur + 1])
            q.push({cur + 1, cnt + 1});
        if (cur * 2 <= MAX && !visited[cur * 2])
            q.push({cur * 2, cnt + 1});
    }
    cout << res << '\n';
    cout << how;

    return 0;
}