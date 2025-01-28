#include<iostream>
#include<vector>
#include<algorithm>
#include<set>;
using namespace std;;

int arr[1001][1001];
int dp[1001][3];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int ans =1000*N+1;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= 2; j++) {
			cin >> arr[i][j];
		}
	}
	for (int a = 0; a < 3; a++) {
		for (int i = 0; i < 3; i++) {
			if (i == a) dp[1][i] = arr[1][i];
			else {
				dp[1][i] = 100000;
			}
		}
		for (int i = 2; i <= N; i++) {
			dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
			dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
			dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];

		}
		for (int i = 0; i < 3; i++) {
			if (i == a)continue;
			else {
				ans = min(ans, dp[N][i]);
			}
		}
	}
	cout << ans;
}
