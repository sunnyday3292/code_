#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, K;
ll dp[1<<15][100];
string S[16];
int c[51];
int str_mod[15];

int get_mod(string s, int d) {
    int ret = 0;
    for (int i = 0; i < s.length(); i++) {
        ret = (ret * 10 + (s[i] - '0')) % d;
    }
    return ret;
}

ll factorial(int k) {
    ll f = 1;
    for (int i = 1; i <= k; i++) f *= i;
    return f;
}

ll gcdll(ll a, ll b) {
    return b ? gcdll(b, a % b) : a;
}

void solve() {
    for (int cur = 0; cur < (1 << N); cur++) {
        for (int i = 0; i < N; i++) {
            if (cur & (1 << i)) continue;
            int nxt = cur | (1 << i);
            for (int j = 0; j < K; j++) {
                int nxtK = ((j * c[S[i].size()]) % K + str_mod[i]) % K;
                dp[nxt][nxtK] += dp[cur][j];
            }
        }
    }

    ll num = dp[(1 << N) - 1][0];
    ll denom = factorial(N);
    if (num == 0) {
        cout << "0/1";
        return;
    }

    ll g = gcdll(num, denom);
    cout << num / g << "/" << denom / g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> S[i];
    cin >> K;

    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    c[0] = 1 % K;
    for (int i = 1; i < 51; i++) {
        c[i] = (c[i - 1] * 10) % K;
    }

    for (int i = 0; i < N; i++) {
        str_mod[i] = get_mod(S[i], K);
    }

    solve();
    return 0;
}
