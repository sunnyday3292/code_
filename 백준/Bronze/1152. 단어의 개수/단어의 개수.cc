#include<iostream>
#include<string>
#include<algorithm>
using namespace std;;

int main() {
	string s;
	getline(cin, s);
	long long cnt = 1;
	long long order = 0;
	if (s==" ") {
		cout << 0;
		return 0;
	}
	for (char c : s) {

		if (c == ' '&&order!=0&&order!=s.length()-1) {
			cnt++;
		}
		order++;
	}
	cout << cnt;

}