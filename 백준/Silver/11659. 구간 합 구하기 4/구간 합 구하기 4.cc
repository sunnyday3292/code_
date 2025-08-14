#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
	int n, m;
	cin >> n >> m;
	int* arr = new int[n+1];
	int a, b;
	int *sum = new int[n+1];

	for (int i = 1; i < n+1; i++) {
		cin >> arr[i];
		if (i == 1) {
			sum[1] = arr[1];
		}
		else {
			sum[i] = sum[i - 1] + arr[i];
		}
	}
	for (int j = 0; j < m; j++) {
		cin >> a >> b;
		if (a == 1) {
			cout << sum[b]<<"\n";
		}
		else {
			cout << sum[b] - sum[a - 1]<<"\n";
		}

	}
}