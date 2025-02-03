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


	string a, b;
	cin >> a;
	char c;
	cin >> c;
	cin >> b;
	if (c == '*') {
		cout << a;
		for (int i = 0; i < b.length()-1; i++) cout << "0";
	}
	if (c == '+') {
		if (a.length() > b.length()) {
			for (int i = 0; i < a.length() - b.length(); i++) {
				cout << a[i];
			}
			for (int j = 0; j < b.length(); j++) cout << b[j];
		}
		else if (a.length() == b.length()) {
			cout << "2";
			for (int i = 1; i < a.length(); i++)cout << a[i];
		}
		else {
			for (int i = 0; i < b.length() - a.length(); i++) {
				cout << b[i];
			}
			for (int j = 0; j < a.length(); j++) cout << a[j];
		}
	}

	
}