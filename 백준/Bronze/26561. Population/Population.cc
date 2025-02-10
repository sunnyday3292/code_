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

	int n;
	cin >> n;
	
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a - b / 7 + b / 4<<"\n";
	}

	
}