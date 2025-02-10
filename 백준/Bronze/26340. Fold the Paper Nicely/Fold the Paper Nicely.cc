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
	
	int N;
	cin >> N;
	int a,b,c;

	for (int i = 0; i < N; i++) {
		cin >> a >> b >> c;
		cout << "Data set: " << a << " " << b << " " << c << "\n";
		for (int j = 0; j < c; j++) {
			if (a > b) a /= 2;
			else b /= 2;
		}
		cout << max(a, b) << " " << min(a, b)<<"\n";
		cout << "\n";

	}
}