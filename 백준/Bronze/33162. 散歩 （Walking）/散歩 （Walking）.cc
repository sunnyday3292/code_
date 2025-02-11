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
	int res = 0;
	cin >> n;
	for (int i = 0; i <n; i++) {
		if (i % 2 == 0) res += 3;
		else res -= 2;
	}
	cout << res;


	
}