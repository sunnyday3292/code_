#include<iostream>
#include<algorithm>
using namespace std;;
int arr[7];

int main() {
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}
	int s = 0;
	sort(arr, arr + 7);
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 == 1) {
			s += arr[i];
		}
	}
	if(s!=0) cout << s<<"\n";
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 == 1) {
			cout << arr[i];
			return 0;
		}
	}
	cout << "-1";
}