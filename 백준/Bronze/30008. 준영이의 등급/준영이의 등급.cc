#include<iostream>
#include<cmath>
#include<string>
using namespace std;;

int main() {

	double arr[16];
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
		int p=arr[i] / n * 100;
		if (p <= 4) cout << 1 << " ";
		else if (p <= 11) cout << 2<<" ";
		else if (p <= 23) cout << 3 << " ";
		else if (p <= 40) cout << 4 << " ";
		else if (p <= 60) cout << 5 << " ";
		else if (p <= 77) cout << 6 << " ";
		else if (p <= 89) cout << 7 << " ";
		else if (p <= 96) cout << 8 << " ";
		else if (p <= 100) cout << 9 << " ";
	}
}