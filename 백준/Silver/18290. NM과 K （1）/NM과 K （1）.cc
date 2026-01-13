#include <bits/stdc++.h>
using namespace std;

int N, M, K;
int arr[11][11];
bool visited[11][11];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int mx = INT_MIN;

void dfs(int cnt, int sum) {
    if (cnt == K) {
        mx = max(mx, sum);
        return;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (visited[i][j]) continue;

            bool ok = true;
            for (int d = 0; d < 4; d++) {
                int nx = i + dx[d];
                int ny = j + dy[d];
                if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if (visited[nx][ny]) ok = false;
            }
            if (!ok) continue;

            visited[i][j] = true;
            dfs(cnt + 1, sum + arr[i][j]);
            visited[i][j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    dfs(0, 0);
    cout << mx << "\n";
}
