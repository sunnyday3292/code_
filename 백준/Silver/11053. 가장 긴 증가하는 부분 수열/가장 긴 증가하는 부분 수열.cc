#include<iostream>
#include<vector>
using namespace std;;

int main() {

	int arr[1001];

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	int dp[1001];
	int max = 1;

	for (int i = 0; i < num; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[j]+1>dp[i]) {
				dp[i] = dp[j] + 1;
				if (max < dp[i]) max = dp[i];
			}
		}
	}
	cout << max;

	
}