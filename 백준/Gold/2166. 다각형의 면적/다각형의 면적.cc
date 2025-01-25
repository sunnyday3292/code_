#include<iostream>
#include<algorithm>
using namespace std;;
long double x[10000];
long double y[10000];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}
	long double area = 0;
	for (int j = 1; j < N-1; j++) {
		area += 0.5 * (x[0] * y[j] + x[j] * y[j + 1] + x[j + 1] * y[0] - x[j] * y[0] - x[j + 1] * y[j] - x[0] * y[j + 1]);
	}
	cout << fixed;
	cout.precision(1);
	if (area < 0) cout << (-1) * area;
	else cout << area;
	return 0;
}