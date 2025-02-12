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
	
	int n, c;
	cin >> n>>c;
	while (n != 0 && c != 0) {
		cout << min(min(30 * n + 40 * c, 35 * n + 30 * c), 40 * n + 20 * c)<<"\n";
		cin >> n >> c;
	}
}