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
	string s;
	cin >> s;
	int n; cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string k;
		cin >> k;
		if (k == s) cnt++;
	}
	cout << cnt;
}