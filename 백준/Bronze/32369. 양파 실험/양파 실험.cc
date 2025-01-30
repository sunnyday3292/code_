#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, n;
	cin >> n>>a >> b;
	int o1 =1;
	int o2 = 1;
	for (int i = 0; i < n; i++) {
		o1 += a;
		o2 += b;
		if (o2 > o1) {
			int tmp = o1;
			o1 = o2;
			o2 = tmp;
		}
		if (o1 == o2) o2--;
	}
	cout << o1 << " " << o2;

	
}