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
	int a[100];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i>0&&a[i - 1] < a[i])cnt++;
	}
	cout << cnt;
}