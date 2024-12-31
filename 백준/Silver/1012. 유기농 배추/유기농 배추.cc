#include <iostream>
#include<cstring>
using namespace std;

int N, M, K;
bool arr[51][51];
bool check[51][51];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

bool dfs(int y, int x) {
    if (check[y][x]) return false;
    check[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int next_x = x + dx[i];
        int next_y = y + dy[i];

        if (next_x >= 0 && next_y >= 0 && next_x < M && next_y < N && arr[next_y][next_x])
            dfs(next_y, next_x);
    }
    return true;
}
int main() {
    int T;
    cin >> T;
    while (T > 0) {
        cin >> M >> N >> K;
        memset(arr, 0, sizeof(arr));
        memset(check, 0, sizeof(check));

        for (int i = 0; i < K; i++) {
            int x,y;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        int count = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j] && !check[i][j]) {
                    if (dfs(i, j)) count++;
                }
            }
        }
        cout << count<<"\n";
        T--;
    }

}