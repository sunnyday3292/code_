#include<iostream>
#include<cmath>
#include<string>
using namespace std;;

int main() {

	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int c = n / 5;
		for (int j = 0; j < c; j++) {
			cout << "++++" << " ";
		}
		int m = n % 5;
		for (int j = 0; j < m; j++) {
			cout << "|";
		}
		cout << "\n";
	}

}