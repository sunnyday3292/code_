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
	int a[100];
	cin >> n;
	int cnt = 0;
	double s = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == -1)cnt++;
		else s += a[i];
	}
	cout << fixed;
	cout.precision(4);
	cout << s / (n - cnt);
}