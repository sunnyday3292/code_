#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,k;
	cin >> n;
	int min = 0;
	int young = 0;
	for (int i = 0; i < n; i++) {
		cin >> k;
		young += (k / 30 + 1) * 10;
		min += (k / 60 + 1) * 15;
	}
	if (min < young) {
		cout << "M " << min;
	}
	if (min > young) {
		cout << "Y " << young;
	}
	if (min == young) {
		cout << "Y " << "M "<<young;
	}
}