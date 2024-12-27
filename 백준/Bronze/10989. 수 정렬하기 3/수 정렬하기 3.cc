#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10001] = { 0, };
	int n,k;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> k;
		arr[k]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] == 0) {
			continue;
		}
		else {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}

}

