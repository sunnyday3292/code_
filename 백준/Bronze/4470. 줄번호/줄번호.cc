#include<iostream>
#include<cmath>
#include<string>
using namespace std;;
char arr[51];


int main() {
	
	int N;
	cin >> N;
	cin.ignore();
	string s;
	for (int i = 0; i < N; i++) {
		getline(cin, s);
		cin.clear();
		cout << i + 1 << ". " << s<<"\n";
	}

	
}