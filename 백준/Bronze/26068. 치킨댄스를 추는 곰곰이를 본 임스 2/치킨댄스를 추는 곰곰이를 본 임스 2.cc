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
	int k;
	char c;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> c >> c >> k;
		if (k <= 90) cnt++;
	}
	cout << cnt;

}