#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, M;
int ans = -1;
int maxcount = 0;
vector<long long> S(11, 0);

void dfs(int idx, long long bits, int num) {
    if (idx == N) {
        int bitcount = __builtin_popcountll(bits);

        if (bitcount > maxcount) {
            maxcount = bitcount;
            ans = num;
        }
        else if (bitcount == maxcount && bitcount != 0) {
            if (ans == -1 || num < ans)
                ans = num;
        }
        return;
    }
    dfs(idx + 1, bits | S[idx], num + 1);

    dfs(idx + 1, bits, num);
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string name, s;
        cin >> name >> s;

        for (int j = 0; j < M; j++) {
            if (s[j] == 'Y') {
                S[i] |= (1LL << j);
            }
        }
    }
    dfs(0, 0, 0);
    if (maxcount == 0) cout << -1;
    else cout << ans;

    return 0;
}