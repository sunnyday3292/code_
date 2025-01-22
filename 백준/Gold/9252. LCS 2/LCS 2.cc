#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;;


char arr1[1001];
char arr2[1001];
int dp[1001][1001];

vector<char>v;

int LCS(int i,int j,int num){
	if (num == 0) {
		for (int i = v.size()-1; i >= 0; i--) {
			cout << v[i];
		}
		return 0;
	}

	if (arr1[i] == arr2[j]&&dp[i][j]==num) {
		v.push_back(arr1[i]);
		LCS(i, j, num - 1);
		return 0;
	}
	else {
		if (dp[i - 1][j] == dp[i][j]) {
			LCS(i - 1, j, num);
			return 0;
		}
		else {
			LCS(i, j - 1, num);
			return 0;
		}
			
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	int i= 1;
	int j = 1;

	for (char c1 : s1) {
		arr1[i] = c1;
		i++;
	}
	for (char c2 : s2) {
		arr2[j] = c2;
		j++;
	}
	int f = s1.size();
	int s = s2.size();
	for (int i = 0; i<=f; i++) {
		for (int j = 0; j<=s; j++) {
			if (i == 0 || j == 0) dp[i][j] = 0;
			else {
				if (arr1[i] == arr2[j]) {					
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
	}
	cout << dp[f][s]<<"\n";
	
	LCS(f,s,dp[f][s]);


	
}