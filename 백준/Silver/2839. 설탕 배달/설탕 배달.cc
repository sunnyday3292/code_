#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int main() {
	int n;
	int na;
	int cnt=0;
	cin >> n;
	for (int i = n / 5; i >= 0; i--) {
		na = n - (5 * i);
		if (na % 3 == 0) {
			cnt += i;
			cnt += na / 3;
			cout << cnt;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}