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

	int l, r;
	cin >> l >> r;
	if (l > r) cout << "Odd " << l * 2;
	else if (l < r) cout << "Odd " << r * 2;
	else if (l == r && l != 0)cout << "Even " << r + l;
	else cout << "Not a moose";

	

}