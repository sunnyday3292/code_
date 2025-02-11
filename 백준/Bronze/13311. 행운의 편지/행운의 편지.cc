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
	long long ans = 1;
	for (int i = 2; i <= 1000; i++) {
		ans *= i;
	}
	cout << ans - 1;
}