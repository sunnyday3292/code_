#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<set>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n,x;
	cin >> n>>x;
	int s, t;
	bool b = false;
	int ms = 0;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		if (x>=s + t) {
			b = true;
			ms = max(s, ms);
		}
	}
	if (b) cout << ms;
	else cout << -1;
	

}