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

	long long int v1, j1, v2, j2, v3, d3, j3;
	cin >> v1 >> j1>> v2>> j2>> v3>> d3>> j3;
	
	long long int o = v1 * j1;
	long long int t = v2 * j2;
	long long int l = v3 * d3 * j3;
	cout << l * (o + t);

}