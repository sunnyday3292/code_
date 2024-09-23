#include<iostream>
using namespace std;;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	int a, b;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		 arr[i]=a+b;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}