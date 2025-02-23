#include<iostream>
#define ll long long
using namespace std;;

int ccw(ll int x1, ll int x2, ll int x3, ll int y1, ll int y2, ll int y3) {
	ll int eccw = x1 * y2 + x2 * y3 + x3 * y1 - (x2 * y1 + x3 * y2 + x1 * y3);
	if (eccw < 0) return -1;
	else if (eccw > 0) return 1;
	else return 0;
}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	if (ccw(x1, x2, x3, y1, y2, y3) * ccw(x1, x2, x4, y1, y2, y4) < 0 && ccw(x3, x4, x1, y3, y4, y1) * ccw(x3, x4, x2, y3, y4, y2) < 0) {
		cout << 1;
	}
	else cout << 0;
}