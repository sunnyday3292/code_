#include<iostream>
#include<vector>
#include<string>
using namespace std;;

int main() {
	while (true) {
		string s;
		cin >> s;
		char arr[100000];
		int num = 0;
		bool bools = 1;
		for (char c : s) {
			arr[num] = c;
			num++;
		}
		if (arr[0] == '0') {
			break;
		}
		for (int i = 0; i <= num / 2; i++) {
			if (arr[i] == arr[num - 1 - i]) {
				continue;
			}
			else {
				bools = 0;
			}
		}
		if (bools == 1) {
			cout << "yes"<<'\n';
		}
		else {
			cout << "no"<<"\n";
		}
	}
}
