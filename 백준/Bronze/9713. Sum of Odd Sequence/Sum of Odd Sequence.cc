#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int k = (N + 1) / 2;
        cout << 1LL * k * k << "\n";
    }
    return 0;
}
