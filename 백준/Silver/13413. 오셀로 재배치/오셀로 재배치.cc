#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector < char > first(1000001), target(1000001);
        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> first[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> target[i];
        }
        int WB = 0, BW = 0;
        for (int i = 0; i < N; i++) {
            if (first[i] == 'W' && target[i] == 'B') WB++;
            else if (first[i] == 'B' && target[i] == 'W') BW++;
        }

        int ans = min(WB, BW) + abs(WB - BW);
        cout << ans << '\n';


    }
    return 0;
}