#include<iostream>
#include<algorithm>
using namespace std;;
int arr[100001];
int ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, S;
	cin >> N >> S;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	int sum=arr[1];
	ans=N+1;
	int start = 1;
	int end = 1;
	
	while (end<=N&&start<=end) {
		if (sum < S) {
			sum += arr[++end];
		}
		else {
			ans = min(ans, end - start + 1);
			sum -= arr[start++];
		}
	}
	if (ans == N+1) cout << "0";
	else { cout << ans; }
	
}