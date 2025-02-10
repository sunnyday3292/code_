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
	int a,d,g;
	int score=0;
	int n;
	cin >> n;
	while (n > 0) {
		cin >> a >> d >> g;
		if (a == d + g) score = max(score,a * (d + g) * 2);
		else  score =max(score, a * (d + g));
		n--;
	}
	cout << score;

}