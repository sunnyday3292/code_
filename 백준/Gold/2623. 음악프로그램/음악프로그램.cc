#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> graph[32001];
vector<int> degree;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    degree.resize(N + 1);
    int bfr = 0;
    int singer = 0;
    int k = 0;
    for (int i = 0; i < M; i++) {
        cin >> singer;
        for (int j = 1; j <= singer; j++) {
            cin >> k;
            if (j != 1) {
                graph[bfr].push_back(k);
                degree[k]++;
            }
            bfr = k;
        }
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    int cnt=0;
    vector<int>v;
    for (int i = 1; i <= N; i++)
        if (degree[i] == 0) {
            pq.push(i);
        }

    while (!pq.empty()) {
        int top = pq.top();
        v.push_back(top);
        cnt++;
        pq.pop();

        for (int i : graph[top]) {
            degree[i]--;
            if (degree[i] == 0) pq.push(i);
        }
    }
    if(cnt!=N) cout<<0;
    else{
        for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    }


    return 0;
}