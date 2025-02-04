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

	long long int c;
	cin >> c;
	string s = to_string(c);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '7') {
			if (c % 7 == 0) cout << 3;
			else cout << 2;
			return 0;
		}
	}
	if (c % 7 == 0) cout << 1;
	else cout << 0;
	return 0;

	
}