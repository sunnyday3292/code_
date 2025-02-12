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
	char a[10000];
	char b[10000];
	int cnt = 0;
	for (int i = 0; i < n;i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i])cnt++;
	}
	cout << cnt;
}