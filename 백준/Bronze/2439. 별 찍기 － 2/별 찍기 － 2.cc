#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;


int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N; j > i; j--) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}
