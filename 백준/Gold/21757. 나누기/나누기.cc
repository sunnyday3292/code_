#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    int A[100001], S[100001];
    long long dp[5];
    S[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }
    long long ans = S[N] / 4;
    if (S[N] == 0) {
        long long zero = 0;
        for (int i = 1; i < N; i++) {
            if (S[i] == 0) zero++;
        }
        cout << zero * (zero - 1) * (zero - 2) / 6;
        return 0;
    }
    if (S[N] % 4 != 0) {
        cout << 0 << '\n';
        return 0;
    }

    dp[0] = 1;
    long long ret = 0;
    for (int i = 1; i <= N; i++) {
        int t = S[i] / ans;
        if (S[i] % ans != 0 || t == 0 || t > 4) continue;
        else {
            dp[t] += dp[t - 1];
        }
        ret = dp[4];
    }
    cout << ret;

    return 0;
}