#include<iostream>
#include<vector>
#include<queue>
using namespace std;;

int n, d;
int a, b, c;
vector<pair<int, int>>graph[100001];

int dist[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		graph[a].push_back({ b,c });
	}
	for (int i = 0; i < 100001; i++) {
		dist[i] = i;
	}
	int now = 0;
	while (true) {
		if (now == d) {
			cout << dist[now];
			break;
		}
		for (int i = 0; i < graph[now].size(); i++) {
			int sum = dist[now] + graph[now][i].second;
			if (sum > d) continue;
			if (sum < dist[graph[now][i].first]) {
				dist[graph[now][i].first] = sum;
				for (int j = graph[now][i].first + 1; j <= d; j++) {
					if (sum >= dist[j]) break;
					else dist[j] = ++sum;
				}
			}
		}
		now++;
	}
	return 0;

}