#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int n, m;
int u, v, d;
int parent[100000][18];
int depth[100000];
long long lengthDist[100000][18];
vector<pair<int,int>> adj[100000];

void dfs(int cur) {
    for (auto &p : adj[cur]) {
        int next = p.first;
        int dist = p.second;
        if (depth[next] == -1) {
            parent[next][0] = cur;
            lengthDist[next][0] = dist;
            depth[next] = depth[cur] + 1;
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v >> d;
        u--; v--;
        adj[u].push_back({v, d});
        adj[v].push_back({u, d});
    }

    memset(parent, -1, sizeof(parent));
    memset(lengthDist, 0, sizeof(lengthDist));
    fill(depth, depth + n, -1);

    depth[0] = 0;
    dfs(0);

    for (int j = 0; j < 17; j++) {
        for (int i = 0; i < n; i++) {
            if (parent[i][j] != -1) {
                parent[i][j + 1] = parent[parent[i][j]][j];
                lengthDist[i][j + 1] = lengthDist[i][j] + lengthDist[parent[i][j]][j];
            }
        }
    }

    cin >> m;
    while (m--) {
        cin >> u >> v;
        u--; v--;

        long long distSum = 0;

        if (depth[u] < depth[v]) swap(u, v);
        int diff = depth[u] - depth[v];
        for (int j = 0; diff; j++) {
            if (diff & 1) {
                distSum += lengthDist[u][j];
                u = parent[u][j];
            }
            diff >>= 1;
        }

        if (u != v) {
            for (int j = 17; j >= 0; j--) {
                if (parent[u][j] != -1 && parent[u][j] != parent[v][j]) {
                    distSum += lengthDist[u][j] + lengthDist[v][j];
                    u = parent[u][j];
                    v = parent[v][j];
                }
            }
            distSum += lengthDist[u][0] + lengthDist[v][0];
            u = parent[u][0];
        }

        cout << distSum << "\n";
    }
    return 0;
}
