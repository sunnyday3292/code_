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
	double q, y;
	cin >> n ;
	cout << fixed;
	cout.precision(4);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> q >> y;
		sum += q * y;

	}
	cout << sum;
}