#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    int minValue = INT_MAX;

    for (int i = 0; i <= b.length() - a.length(); i++) {
        int count = 0;
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != b[i + j]) {
                count++;
            }
        }
        minValue = min(minValue, count);
    }

    cout << minValue;
    return 0;
}