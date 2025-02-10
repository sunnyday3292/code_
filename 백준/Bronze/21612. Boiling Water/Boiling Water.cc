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

	int b;
	cin >> b;
	int wh= 5 * b - 400;
	cout << wh<<"\n";
	if (wh < 100)cout << 1;
	if (wh > 100)cout << -1;
	if (wh == 100)cout << 0;

	
}