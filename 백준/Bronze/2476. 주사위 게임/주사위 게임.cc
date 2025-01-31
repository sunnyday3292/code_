#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
int arr[1000];


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int a, b, c;
	int prize = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a == b && b == c) prize = 10000 + 1000 * c;
		else {
			if (a == b && a != c) prize = 1000 + 100 * a;
			if (a == c && a != b) prize = 1000 + 100 * a;
			if (b == c && a != b) prize = 1000 + 100 * b;
			if (a != b && b != c && c != a) prize = max(max(a, b), c) * 100;
		}
		arr[i] = prize;
	}
	sort(arr, arr + n);
	cout << arr[n-1];
	
}