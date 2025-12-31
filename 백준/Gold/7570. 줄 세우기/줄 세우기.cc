#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector < int > arr(n + 1);
    vector < int > idx(n + 1);
    vector < int > dp(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        idx[arr[i]] = i;
    }
    int mx = 1;
    for (int i = n; i >= 1; i--) {
        dp[i] = 1;
        if (arr[i] < n) {
            int next_idx = idx[arr[i] + 1];
            if (i < next_idx) {
                dp[i] = dp[next_idx] + 1;
            }
        }
        mx = max(mx, dp[i]);
    }

    cout << n - mx;
    return 0;
}