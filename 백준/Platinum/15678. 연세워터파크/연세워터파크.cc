#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, d;
    cin >> n >> d;
    deque<pair<ll, int>> dq;
    ll dp[100001];
    ll A[100001];
    ll ans = LLONG_MIN;

    for (int i = 1; i <= n; i++)
        cin >> A[i];

    for (int i = 1; i <= n; i++)
    {
        while (!dq.empty() && dq.front().second < i - d)
            dq.pop_front();
        ll best = dq.empty() ? 0 : dq.front().first;
        dp[i] = max(A[i], A[i] + best);
        while (!dq.empty() && dq.back().first <= dp[i])
        {
            dq.pop_back();
        }
        dq.push_back({dp[i], i});
        ans = max(ans, dp[i]);
    }
    cout << ans;

    return 0;
}