#include<iostream>
#include<vector>
#include<string>
using namespace std;;
int arr[100];
char v[5] = {'M','O','B','I','S'};


int main() {
	string s;
	cin >> s;
	bool b = false;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 5; j++) {
			if (s[i] == v[j]) {
				v[j] = 'N';
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		if (v[i] == 'N') continue;
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	
}
