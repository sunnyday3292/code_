#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
int arr[9][9];


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * (n - i)+1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

}