#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

vector<pair<int, pair <int,int>>> edge;
int parent[10001];
int treerank[10001];

int Find(int x) {
	if (x == parent[x]) return x;
	return parent[x] = Find(parent[x]);
}

bool Union(int x, int y) {
	int px = Find(x);
	int py = Find(y);
	if (px != py) {
		if (treerank[px] < treerank[py]) {
			parent[px] = py;
			treerank[px] += treerank[py];
		}
		else if (treerank[px] > treerank[py]) {
			parent[py] = px;
			treerank[py] += treerank[px];
		}
		else {
			parent[py] = px;
			treerank[py]++;
		}

		return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int V, E;
	cin >> V >> E;
	int a, b, c;
	int val = 0;
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
		edge.push_back(make_pair(c, make_pair( a,b )));
	}
	for (int i = 1; i <= V; i++) {
		parent[i] = i;
	}
	sort(edge.begin(), edge.end());
	for (int i = 0; i < E; i++) {
		if (!Union(edge[i].second.first, edge[i].second.second)) {
			continue;
		}
		else val += edge[i].first;
	}
	cout << val;

}