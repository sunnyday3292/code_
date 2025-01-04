#include <iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	string s;
	getline(cin, s);
	for (char c : s) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			cnt++;
		}
	}
	cout << cnt;
	
}
	