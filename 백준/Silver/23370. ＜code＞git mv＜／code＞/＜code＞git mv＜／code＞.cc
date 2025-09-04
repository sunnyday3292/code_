#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    vector<string> source, dest;
    string tmp;
    for (auto c : str1) {
        if (c == '/') {
            source.push_back(tmp);
            tmp = "";
            continue;
        }
        tmp.push_back(c);
    }
    source.push_back(tmp);
    tmp = "";

    for (auto c : str2) {
        if (c == '/') {
            dest.push_back(tmp);
            tmp = "";
            continue;
        }
        tmp.push_back(c);
    }
    dest.push_back(tmp);
    tmp = "";

    int start = 0, end = 0;
    int n = source.size();
    int m = dest.size();
    while (start < n && start < m && source[start] == dest[start]) start++;
    while (n - 1 - end >= 0 && m - 1 - end >= 0 && source[n - 1 - end] == dest[m - 1 - end]) end++;
    
    for (int i = 0; i < start; i++) {
        cout << source[i] << "/";
    }
    cout << "{";
    for (int i = start; i < n - end; i++) {
        cout << source[i];
        if (i != n - end - 1) cout << "/";
    }
    cout << " => ";
    for (int i = start; i < m - end; i++) {
        cout << dest[i];
        if (i != m - end - 1) cout << "/";
    }
    cout << "}";

    for (int i = n - end; i < n; i++) {
        cout << "/" << source[i];
    }
    cout << "\n";
    return 0;
}