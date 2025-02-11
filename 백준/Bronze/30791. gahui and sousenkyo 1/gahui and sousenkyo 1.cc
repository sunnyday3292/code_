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
	int a, b, c, d, e;
	int cnt = 0;
	cin >> a >> b >> c >> d >> e;
	if (abs(e - a) <= 1000)cnt++;
	if (abs(d - a) <= 1000)cnt++;
	if (abs(c - a) <= 1000)cnt++;
	if (abs(b - a) <= 1000)cnt++;
	cout << cnt;



}