#include<iostream>
using namespace std;;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n / 5; i++) cout << "V";
	for (int i = 0; i < n % 5; i++) cout << "I";
}