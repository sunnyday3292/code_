#include<iostream>
using namespace std;;

int parent[201];
int treerank[201];
int arr[201][1001];

int Find(int x) {
	if (x == parent[x]) return x;
	return parent[x]=Find(parent[x]);
}


bool Union(int x, int y) {
	int px = Find(x);
	int py = Find(y);
	if (px != py) {
			if(treerank[px]<treerank[py]){ 
				parent[px] = py;
				treerank[px] += treerank[py];
			}
			else if(treerank[px] > treerank[py]) {
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

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,m; 
	cin >> n>>m;
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
		treerank[i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) { Union(i, j); }
		}
	}
	int* plan = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> plan[i];

	}
	for (int i = 0; i < m - 1; i++) {
		if (Union(plan[i], plan[i + 1])) {
			cout<<"NO";
			return 0;
		}
	}
	cout << "YES";
	
	

}