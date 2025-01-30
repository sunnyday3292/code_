#include<iostream>
#include<cmath>
#include<string>
using namespace std;;

int main() {

	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h >= 100)cout << "OK";
	else {
		int work = min(min(s, k), h);
		if (work == s) {
			cout << "Soongsil";
		}
		else {
			if (work == k) cout << "Korea";
			else {
				cout << "Hanyang";
			}
		}
	}
	
}