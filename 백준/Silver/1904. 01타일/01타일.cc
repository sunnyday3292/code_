#include<iostream>
#include<algorithm>
using namespace std;;

int arr[100000];
int dp[1000000];

int main() {
	int N;
	cin >> N;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= N; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%15746;
	}
	cout << dp[N]%15746;
}