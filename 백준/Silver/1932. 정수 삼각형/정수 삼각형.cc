#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int arr[501][501] = { 0, };
int dp[501][501] = {0,};
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-1])+arr[i][j];
        }
    }
    int maximum = 0;
    for (int i = 1; i <= n; i++) {
        maximum = max(dp[n][i], maximum);
    }
    cout << maximum<<"\n";
}

