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
	while (n != 0) {
		int mn = 10000;
		int num = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (mn > abs(2023 - a[i])) {
				mn = abs(2023 - a[i]);
				num = i + 1;
			}
		}
		cout << num<<"\n";
		cin >> n;
	}
}