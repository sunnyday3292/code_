#include<iostream>
#include<cmath>
#include<string>
using namespace std;;

int main() {

	int n,a,b;
	cin >> n;
	cin >> a >> b;
	if (n < a / 2 + b) cout << n;
	else {
		cout << a / 2 + b;
	}
	
}