#include<iostream>
using namespace std;;

int parent[500001];
int cnt = 0;
int Find(int x) {
	if(x == parent[x]) return x;
	return parent[x] = Find(parent[x]);
}

bool Union(int x, int y) {
	int px = Find(x);
	int py = Find(y);
	if (px != py) {
		parent[px] = py;
		return true;
	}
	return false;
}
int main() {
	int n, m; 
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		cnt++;
		if (!Union(a, b)) {
			cout << cnt;
			return 0;
		}
	}
	cout << "0";
}