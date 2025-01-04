#include <iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	string s;
	getline(cin, s);
	while (s != "#") {
		for (char c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
				cnt++;
			}
			if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
				cnt++;
			}
		}
		cout << cnt<<"\n";
		cnt = 0;
		getline(cin, s);
	}
}
	