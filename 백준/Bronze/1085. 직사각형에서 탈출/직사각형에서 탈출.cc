#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x1,y1,x2,y2;
	cin >> x1>> y1>> x2>> y2;
	int mini=min(abs(x2 - x1), abs(y1 - y2));
	int ans = min(min(mini, x1), y1);
	cout << ans;
	
}