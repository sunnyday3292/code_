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

	int n;
	cin >> n;
	cout << "Gnomes:" << "\n";
	int arr[3];
	for (int i = 0; i < n; i++) {
		cin >> arr[0] >> arr[1] >> arr[2];
		int a = arr[0];
		int b = arr[1];
		int c = arr[2];
		sort(arr, arr + 3);
		if (a == arr[0] && b == arr[1] && c == arr[2]) {
			cout << "Ordered " << "\n";
		}
		else {
			if (a == arr[2] && b == arr[1] && c == arr[0]) {
				cout << "Ordered " << "\n";
			}
			else cout << "Unordered " << "\n";
		}
	}

}