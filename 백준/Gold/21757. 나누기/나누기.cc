#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<long long> A(N + 1), S(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    if (S[N] % 4 != 0) {
        cout << 0;
        return 0;
    }

    long long target = S[N] / 4;
    long long dp[4] = {0}; 
    dp[0] = 1; 

    for (int i = 1; i < N; i++) {
        if (S[i] == target * 3) dp[3] += dp[2];
        if (S[i] == target * 2) dp[2] += dp[1];
        if (S[i] == target * 1) dp[1] += dp[0];
    }

    cout << dp[3];
    return 0;
}