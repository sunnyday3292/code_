#include <bits/stdc++.h>
using namespace std;

int R, C, T;
int arr[51][51];
int tmp[51][51];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

vector<int> air;

void spread() {
    memset(tmp, 0, sizeof(tmp));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (arr[i][j] > 0) {
                int dust = arr[i][j] / 5;
                int cnt = 0;

                for (int d = 0; d < 4; d++) {
                    int nx = i + dx[d];
                    int ny = j + dy[d];

                    if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
                    if (arr[nx][ny] == -1) continue;

                    tmp[nx][ny] += dust;
                    cnt++;
                }

                tmp[i][j] += arr[i][j] - dust * cnt;
            }
        }
    }

    for (auto x : air) {
        tmp[x][0] = -1;
    }

    memcpy(arr, tmp, sizeof(arr));
}

void clean() {
    int top = air[0];
    int bottom = air[1];

    for (int i = top-1; i > 0; i--) arr[i][0] = arr[i-1][0];
    for (int i = 0; i < C-1; i++) arr[0][i] = arr[0][i+1];
    for (int i = 0; i < top; i++) arr[i][C-1] = arr[i+1][C-1];
    for (int i = C-1; i > 1; i--) arr[top][i] = arr[top][i-1];
    arr[top][1] = 0;

    for (int i = bottom+1; i < R-1; i++) arr[i][0] = arr[i+1][0];
    for (int i = 0; i < C-1; i++) arr[R-1][i] = arr[R-1][i+1];
    for (int i = R-1; i > bottom; i--) arr[i][C-1] = arr[i-1][C-1];
    for (int i = C-1; i > 1; i--) arr[bottom][i] = arr[bottom][i-1];
    arr[bottom][1] = 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C >> T;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == -1) air.push_back(i);
        }
    }

    while (T--) {
        spread();
        clean();
    }

    int sum = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (arr[i][j] > 0) sum += arr[i][j];

    cout << sum;
    return 0;
}