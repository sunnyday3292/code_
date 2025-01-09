#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if (a + b < c * 2) cout << a + b;
	else {
		cout << a + b - 2 * c;
	}
	
}
	