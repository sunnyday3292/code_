#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int a;
	cin >> a;
	int k = 1000 - a;
	int l = k / 500;
	k = k % 500;
	int m = k / 100;
	k = k % 100;
	int n = k / 50;
	k = k % 50;
	int o = k / 10;
	k = k % 10;
	int p = k / 5;
	k = k % 5;
	cout << l + m + n + o + p + k;
}

	