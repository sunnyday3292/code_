#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, W;
int zone[2][10001];
int a[10001], b[10001], c[10001];

void recur(int start) {
    for (int i = start; i < N; i++) {
        a[i + 1] = min(b[i] + 1, c[i] + 1);
        if (zone[0][i] + zone[1][i] <= W) a[i + 1] = min(a[i + 1], a[i] + 1);
        if (i > 0 && zone[0][i - 1] + zone[0][i] <= W && zone[1][i - 1] + zone[1][i] <= W) {
            a[i + 1] = min(a[i + 1], a[i - 1] + 2);
        }

        if (i < N - 1) {
            b[i + 1] = a[i + 1] + 1;
            if (zone[0][i] + zone[0][i + 1] <= W) b[i + 1] = min(b[i + 1], c[i] + 1);

            c[i + 1] = a[i + 1] + 1;
            if (zone[1][i] + zone[1][i + 1] <= W) c[i + 1] = min(c[i + 1], b[i] + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        cin >> N >> W;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < N; j++) cin >> zone[i][j];

        if (N == 1) {
            if (zone[0][0] + zone[1][0] <= W) cout << 1 << "\n";
            else cout << 2 << "\n";
            continue;
        }

        int res = 2e9;

        a[0] = 0; b[0] = 1; c[0] = 1;
        recur(0);
        res = min(res, a[N]);

        if (zone[0][0] + zone[0][N - 1] <= W) {
            a[1] = 1; 
            b[1] = 2;
            c[1] = (zone[1][0] + zone[1][1] <= W) ? 1 : 2;
            recur(1);
            res = min(res, c[N - 1] + 1);
        }

        if (zone[1][0] + zone[1][N - 1] <= W) {
            a[1] = 1;
            c[1] = 2;
            b[1] = (zone[0][0] + zone[0][1] <= W) ? 1 : 2;
            recur(1);
            res = min(res, b[N - 1] + 1);
        }

        if (zone[0][0] + zone[0][N - 1] <= W && zone[1][0] + zone[1][N - 1] <= W) {
            a[1] = 0; b[1] = 1; c[1] = 1;
            recur(1);
            res = min(res, a[N - 1] + 2);
        }

        cout << res << "\n";
    }
    return 0;
}