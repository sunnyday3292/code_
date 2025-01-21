#include<iostream>
using namespace std;;

int parent[1000001];
int treerank[1000001];

int Find(int x) {
	if (x == parent[x]) return x;
	return parent[x]=Find(parent[x]);
}


bool Union(int x, int y,int k) {
	int px = Find(x);
	int py = Find(y);
	if (px != py) {
		if (k == 0) {
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
		else cout << "NO"<<"\n"; return false;
	}
	if(k==1) cout << "YES"<<"\n";
	return false;
}
int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; 
	cin >> n >> m;
	int k,a, b;
	for (int i = 0; i < n+1; i++) {
		parent[i] = i;
		treerank[i] = 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> k>>a >> b;
		Union(a, b, k);
	}
}