#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[26] = {0};
    for (char c : s) {
        if ('a' <= c && c <= 'z') a[c - 'a']++;
        else a[c - 'A']++;
    }

    int maxCount = -1;
    char ans;
    for (int i = 0; i < 26; i++) {
        if (a[i] > maxCount) {
            maxCount = a[i];
            ans = 'A' + i;
        } else if (a[i] == maxCount) {
            ans = '?';
        }
    }
    cout << ans;
}
