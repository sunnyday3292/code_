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
	
	string n;
	cin >> n;
	for (int i = 0; i < n.length(); i++) {
		cout << n[i];
		if (i == (n.length()-1) / 2)cout << " ";
	}
}