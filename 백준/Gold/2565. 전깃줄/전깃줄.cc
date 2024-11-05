#include<iostream>
#include<vector>
#include<map>
using namespace std;;

int main() {
	map<int, int> m;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int k,v;
		cin >> k>>v;
		m.insert({ k,v });
	}
	int arr[1001];
	int dp[1001];
	int i = 0;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		arr[i] = iter->second;
		i++;
	}
	int max = 1;

	for (int i = 0; i < num; i++) {
		//cout << arr[i] << "\n";
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[j]+1>dp[i]) {
				dp[i] = dp[j] + 1;
				if (max < dp[i]) max = dp[i];
			}
		}
	}
	cout << num-max;


	
}