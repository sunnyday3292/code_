#include<iostream>
#include<vector>
using namespace std;;

int main() {
	string s1, s2;
	int arr[1001];
	int arr2[1001];
	int num = 0;
	cin >> s1 >> s2;
	for (char c : s1) {
		arr[num] = c;
		num++;
	}
	int num2 = 0;
	for (char a : s2) {
		arr2[num2] = a;
		num2++;
	}
	//2차원 동적배열 할당(dp)
	int **dp= new int*[num + 1];
	for (int i = 0; i < num+1; i++) {
		dp[i] = new int[num2 + 1];
	}
	//
	for (int i = 0; i < num + 1; i++) dp[i][0]=0;
	for (int j = 0; j < num2 + 1; j++) dp[0][j] = 0;
	//
	for (int i = 1; i < num + 1; i++) {
		for (int j = 1; j < num2 + 1; j++) {
			if (arr[i-1] == arr2[j-1]) { 
				dp[i][j] = dp[i - 1][j - 1] + 1;

			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

			}
		}

	}
	cout << dp[num][num2];

	
}