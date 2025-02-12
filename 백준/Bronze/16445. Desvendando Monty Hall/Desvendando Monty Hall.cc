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
	
	int n;
	cin >> n;
	int cnt = 0;
	int a;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a == 1)continue;
		else {
			cnt++;
		}
	}
	cout << cnt;
}