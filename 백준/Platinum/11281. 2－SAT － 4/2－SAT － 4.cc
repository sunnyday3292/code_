#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int get_vertex_num(int v) {
    return (v > 0) ? (v - 1) * 2 : (-v - 1) * 2 + 1;
}
int get_not_vertex_num(int v) {
    return (v > 0) ? (v - 1) * 2 + 1 : (-v - 1) * 2;
}

void set_graph(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
}

vector<vector<int>> get_reversed_graph(vector<vector<int>>& graph) {
    int sz = graph.size();
    vector<vector<int>> reversed_graph(sz);
    for (int u = 0; u < sz; u++) {
        for (auto v : graph[u]) {
            reversed_graph[v].push_back(u);
        }
    }
    return reversed_graph;
}

void dfs1(int cur, vector<bool>& visited, stack<int>& st, vector<vector<int>>& graph) {
    visited[cur] = true;
    for (auto next : graph[cur]) {
        if (!visited[next]) dfs1(next, visited, st, graph);
    }
    st.push(cur);
}

void dfs2(int cur, vector<int>& scc, vector<bool>& visited, vector<vector<int>>& graph) {
    visited[cur] = true;
    scc.push_back(cur);
    for (auto next : graph[cur]) {
        if (!visited[next]) dfs2(next, scc, visited, graph);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(2 * N);
    int u, v;
    for (int i = 0; i < M; i++) {
        cin >> u >> v;
        set_graph(graph, get_not_vertex_num(u), get_vertex_num(v));
        set_graph(graph, get_not_vertex_num(v), get_vertex_num(u));
    }

    auto reversed_graph = get_reversed_graph(graph);

    vector<bool> visited(2 * N, false);
    stack<int> st;
    for (int u = 0; u < 2 * N; u++) {
        if (!visited[u]) dfs1(u, visited, st, graph);
    }

    fill(visited.begin(), visited.end(), false);

    vector<vector<int>> SCC;
    while (!st.empty()) {
        int cur = st.top(); st.pop();
        if (!visited[cur]) {
            vector<int> curSCC;
            dfs2(cur, curSCC, visited, reversed_graph);
            SCC.push_back(curSCC);
        }
    }

    vector<int> scc_idx(2 * N);
    int idx = 0;
    for (auto& curSCC : SCC) {
        for (int cur : curSCC) scc_idx[cur] = idx;
        ++idx;
    }

    for (int i = 0; i < N; i++) {
        if (scc_idx[i * 2] == scc_idx[i * 2 + 1]) {
            cout << 0 << "\n";
            return 0;
        }
    }
    vector<int> assignment(N,-1);
    vector<pair<int,int>>order;
    for(int i = 0;i < 2*N; i++)order.push_back({-scc_idx[i],i});
    sort(order.begin(),order.end());
    for(auto [_, var] : order){
        int x = var / 2;
        if(assignment[x]==-1){
            if(var%2==0)assignment[x]=1;
            else assignment[x]=0;
        }
    }

    cout << 1 << "\n";
    for(int i = 0; i < N; i++)cout<<assignment[i]<<" ";
    cout<<"\n";
    return 0;
}
