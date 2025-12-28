#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int,int>> v;
    for (int i = 0; i < N; i++) {
        int a, s, e;
        cin >> a >> s >> e;
        v.push_back({s, e});
    }
    
    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto [s, e] : v) {
        if (!pq.empty() && pq.top() <= s) {
            pq.pop();
        }
        pq.push(e);
    }
    cout << pq.size();
    return 0;
}
