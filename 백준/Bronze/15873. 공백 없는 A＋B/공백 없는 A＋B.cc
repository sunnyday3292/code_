#include <iostream>
#include<string>
using namespace std;

int main() {
	string n;
	int sum = 0;
	cin >> n;
	if (n.length() == 4) {
		cout << 20;
		return 0;
	}
	if (n.length() == 3) {
		if (n[0] == '1' && n[1] == '0') {
			int k= char(n[2]) - 48;
			cout << 10 + k;
		}
		else {
			int k = char(n[0]) - 48;
			cout << 10 + k;
		}
		return 0;
	}
	else {
		for (char c : n) {
			sum += c - 48;

		}
		cout << sum;
	}
}
	