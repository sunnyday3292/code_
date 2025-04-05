#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int arr[100];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++) {
		int ans = 1;
		for (int j = 0; j < N; j++) {
			if (arr[j] < arr[i]) ans++;
		}
		cout << ans << '\n';
	}
}
