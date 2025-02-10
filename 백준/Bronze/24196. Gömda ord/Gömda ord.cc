#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	for (int idx = 0; idx < s.length();) {
		cout << s[idx];
		idx += s[idx] - 'A' + 1;
	}
}