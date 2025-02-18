#include<iostream>
#include<queue>
using namespace std;;


int topologicalsort(int N,int W,int indegree[],vector<int>graph[1001],int time[]) {
	queue<int>q;
	int dp[10001] = { 0, };
	for (int i = 1; i <= N; i++) {
		if (indegree[i] == 0) {
			dp[i] = time[i];
			q.push(i);
		}
	}
	int mx = 0;
	while (!q.empty()) {
		int t = q.front();
		if (t == W) {
			cout << dp[W]<<"\n";
			return 0;
		}
		q.pop();
		for (int i = 0; i < graph[t].size(); i++) {
			indegree[graph[t][i]]--;
			dp[graph[t][i]] = max(dp[graph[t][i]], dp[t] + time[graph[t][i]]);
			if (indegree[graph[t][i]] == 0) {
				q.push(graph[t][i]);
			}
		}

	}
}
int main(){

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int time[1001];
		int indegree[1001] = { 0, };
		vector<int>graph[1001];
		int N, K;
		cin >> N >> K;
		for (int i = 1; i <= N; i++) {
			cin >> time[i];
		}
		for (int i = 0; i < K; i++) {
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			indegree[b]++;
		}
		int W;
		cin >> W;
		topologicalsort(N, W,indegree,graph,time);

	}
}

