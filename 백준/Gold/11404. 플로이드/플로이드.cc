#include <iostream>
#include <algorithm>
using namespace std; 
int route[101][101];

int main() {
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 

	int n; cin >> n; 
	int m;  cin >> m; 

    fill(route[0], route[101], 10000000); 

	for (int i = 1; i <= n; i++) {
		route[i][i] = 0; 
	}

	for (int i = 0; i < m; i++) {
		int a, b, val; 
		cin >> a >> b >> val; 
		route[a][b] =min(route[a][b], val); 
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				route[j][k] = min(route[j][k], route[j][i] + route[i][k]);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (route[i][j] == 10000000) cout << "0 "; 
			else cout << route[i][j] << " ";
		}cout << "\n";
	}

	return 0; 
	
}
