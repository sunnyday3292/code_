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

	int a,b;
	cin >> a>>b;
	if (a > b)cout << 1;
	if (a == b) cout << 0;
	if (a < b) cout << -1;
}