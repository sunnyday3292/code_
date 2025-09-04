#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int n, m;
ll dist[100001];
vector<array<ll, 2>> adj[100001];

void dijkstra(int start) {
    priority_queue<array<ll, 2>> pq;
    pq.push ({dist[start], start});

    while (!pq.empty()) {
        auto it = pq.top();
        pq.pop();
        for (auto& it2 : adj[it[1]]) {
            ll next_candy = it[0];
            next_candy = it2[1] * next_candy / 100;
            //if (it2[1] * it[0] % 100 != 0) next_candy++;
            if (dist[it2[0]] < next_candy) {
                dist[it2[0]] = next_candy;
                pq.push ({next_candy, it2[0]});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset (dist, -1, sizeof (dist));
    int n, m;
    cin >> n >> m;
    int s, t, c;
    cin >> s >> t >> c;
    dist[s] = c;
    for (int i = 0; i < m; i++) {
        int u, v, p;
        cin >> u >> v >> p;
        adj[u].push_back ({v, 100 - p});
        adj[v].push_back ({u, 100 - p});
    }
    dijkstra (s);
    
    
    cout << dist[t] << "\n";
    return 0;
}