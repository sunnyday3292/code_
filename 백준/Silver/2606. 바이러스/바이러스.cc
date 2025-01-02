#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;
vector<int>v[101];
bool visited[101];
int cnt = 0;

void dfs(int x) {
	
	visited[x] = true;

	for (int i = 0; i < v[x].size(); i++) {
		int y = v[x][i];
		if (!visited[y]) {
			cnt++;
			dfs(y);
		}
	}
	
}



int main() {
	int n,m;
	int a, b;
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	cout << cnt;
}
