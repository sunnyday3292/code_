#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstring>
using namespace std;

vector<vector<int>> edge(200001);
vector<vector<int>> revEdge(200001);
vector<vector<int>> scc;

int visited[200001];
int group[200001];
stack<int> st;
int scc_cnt = 0;

void dfs(int node) {
    visited[node] = 1;
    for (auto &next : edge[node]) {
        if (!visited[next]) dfs(next);
    }
    st.push(node);
}

void dfsRev(int node) {
    visited[node] = 1;
    group[node] = scc_cnt;
    scc[scc_cnt].push_back(node);
    for (auto &next : revEdge[node]) {
        if (!visited[next]) dfsRev(next);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        edge[from].push_back(to);
        revEdge[to].push_back(from);
    }


    for (int i = 1; i <= N; i++) {
        if (!visited[i]) dfs(i);
    }

    memset(visited, 0, sizeof(visited));


    scc.resize(N + 1);
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        if (!visited[node]) {
            scc_cnt++;
            dfsRev(node);
            sort(scc[scc_cnt].begin(), scc[scc_cnt].end()); 
        }
    }
    sort(scc.begin() + 1, scc.begin() + scc_cnt + 1, [](vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    });
    
    if(scc_cnt==1)cout<<"Yes";
    else cout<<"No";
    return 0;
}
