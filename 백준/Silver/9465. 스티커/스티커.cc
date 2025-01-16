#include<iostream>
using namespace std;;
int arr[3][100001];
int dp[3][100002] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int j = 1; j <= n; j++) {
			cin >> arr[1][j];
		}
		for (int j = 1; j <= n; j++) {
			cin >> arr[2][j];
		}
		dp[1][1] = arr[1][1];
		dp[1][2] = arr[1][2]+arr[2][1];
		dp[2][1] = arr[2][1];
		dp[2][2] = arr[1][1] + arr[2][2];
		for (int j = 3; j <= n; j++) {
			dp[1][j] = arr[1][j] + max(dp[2][j - 1], dp[2][j - 2]);
			dp[2][j] = arr[2][j] + max(dp[1][j - 1], dp[1][j - 2]);
		}
		cout<<max(dp[2][n],dp[1][n])<<"\n";
	}
}
