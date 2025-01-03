#include <iostream>
using namespace std;

int main() {
	int a, x;
	int k;
	cin >> a >> x;
	for (int i = 0; i < a; i++) {
		cin >> k;
		if (k < x) cout << k<<" ";
	}
}

