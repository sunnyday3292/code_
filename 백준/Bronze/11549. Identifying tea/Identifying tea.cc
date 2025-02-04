#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
const double PI = 3.1415927;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int n;
	cin >> n;
	int t;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		if (t == n)cnt++;
	}
	cout << cnt;
}