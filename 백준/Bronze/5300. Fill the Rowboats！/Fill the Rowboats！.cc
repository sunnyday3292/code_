#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
const double PI = 3.1415927;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 6 == 1 && i != 1) {
			cout << "Go! ";
		}
		cout << i << " ";
		
	}
	cout << "Go!";

}