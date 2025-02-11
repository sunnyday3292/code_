#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n ;
	string arr[1001];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	cin >> m;
	int l, r;
	for (int j = 0; j < m; j++) {
		cin >> l >> r;
		for (int k = l; k <= r; k++) {
			cout << arr[k] << "\n";
		}
	}

}