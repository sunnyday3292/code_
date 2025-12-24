#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector < long long > t(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector < long long > dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        long long target = t[i - 1] - b[i - 1];
        int k = lower_bound(t.begin(), t.end(), target) - t.begin();
        if (dp[i] < dp[k] + c[i - 1]) {
            dp[i] = dp[k] + c[i - 1];
        }
    }
    cout << dp[n];
    return 0;
}