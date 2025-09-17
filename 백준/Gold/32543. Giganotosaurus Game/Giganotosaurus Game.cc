#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD = 1e9 + 7;
ll dp[130005][500];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string str;
    cin >> str;
    /*
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            dp[i + 1] += dp[i];
            dp[i + 2] += dp[i];
            dp[i + 1] %= MOD;
            dp[i + 2] %= MOD;
        }
    }
    ll ans = dp[n + 1];
    if (str[n - 1] != '#')
        ans += dp[n];
    ans %= MOD;
    cout << ans << "\n";*/
    // ll ans = 0;
    dp[0][1] = 1;
    int max_dist = 0, max_jump = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
            continue;
        for (int j = 1; j < 450; j++)
        {
            if (dp[i][j] == 0)
                continue;
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= MOD;
            dp[i + 1 + j][j + 1] += dp[i][j];
            dp[i + 1 + j][j + 1] %= MOD;
            max_dist = max(max_dist, i + j + 1);
            max_jump = max(max_jump, j + 1);
        }
    }

    ll ans = 0;
    for (int i = n; i <= max_dist; i++)
    {
        for (int j = 0; j <= max_jump; j++) {
            ans += dp[i][j];
        }
        ans %= MOD;
    }
    cout << ans % MOD << "\n";
    return 0;
}