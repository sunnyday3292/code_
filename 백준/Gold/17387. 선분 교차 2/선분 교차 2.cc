#include<iostream>
#include<queue>
using namespace std;;
#define LL long long
#define pp pair<LL, LL>
#define F first
#define S second

using namespace std;

pp X1, X2, Y1, Y2;

int get_ccw(pp x, pp y, pp z) {
	LL ans = 0;
	ans += (x.F * y.S + y.F * z.S + z.F * x.S);
	ans -= (y.F * x.S + z.F * y.S + x.F * z.S);
	if (ans > 0) return 1;
	else if (ans == 0) return 0;
	else return -1;
}

void solve() {
	int ab_cd = get_ccw(X1, X2, Y1) * get_ccw(X1, X2, Y2);
	int cd_ab = get_ccw(Y1, Y2, X1) * get_ccw(Y1, Y2, X2);
	if (ab_cd == 0 && cd_ab == 0) {
		if (X1 > X2) swap(X1, X2);
		if (Y1 > Y2) swap(Y1, Y2);
		if (X2 >= Y1 && X1 <= Y2) cout << "1";
		else cout << "0";
	}
	else if (ab_cd <= 0 && cd_ab <= 0) cout << "1";
	else cout << "0";
}

int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> X1.F >> X1.S;
	cin >> X2.F >> X2.S;
	cin >> Y1.F >> Y1.S;
	cin >> Y2.F >> Y2.S;
	solve();
	return 0;
}



