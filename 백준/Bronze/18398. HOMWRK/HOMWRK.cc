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
	int t;
	cin >> t;
	while (t > 0) {
		int num,a,b;
		cin >> num;
		for (int i = 0; i < num; i++) {
			cin >> a >> b;
			cout << a + b << " " << a * b << "\n";
		}
		t--;
	}
	
}