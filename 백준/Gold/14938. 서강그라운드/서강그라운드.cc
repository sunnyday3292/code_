#include <bits/stdc++.h>
using namespace std;

#define INF 100000000

int n, m, r;
int item[101];
int value[101];
vector<pair<int, int>> node[101];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
    pq;

int dijkstra(int k) {
    for (int i = 1; i <= n; i++)
        value[i] = INF;
    value[k] = 0;
    pq.push(make_pair(0, k));
    while (!pq.empty()) {
        int x = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        for (int i = 0; i < node[u].size(); i++) {
            int V = node[u][i].first;
            int W = node[u][i].second;

            if (x + W < value[V]) {
                value[V] = x + W;
                pq.push(make_pair(x + W, V));
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (value[i] <= m) sum += item[i];
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;
    for (int i = 1; i <= n; i++)
        cin >> item[i];
    int a, b, l;
    for (int i = 0; i < r; i++) {
        cin >> a >> b >> l;
        node[a].push_back(make_pair(b, l));
        node[b].push_back(make_pair(a, l));
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dijkstra(i));
    }
    cout << ans;
    return 0;
}