#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

long long arr[1000001];
long long sum[1000001] = { 0, };

int main() {
	long long N, M;
	cin >> N >> M;
	arr[0] = 0;
	sum[0] = 0;
	long long cnt = 0;
	long long * mod = new long long[M]{ 0, };
	for (long long i = 1; i <= N; i++) {
		cin >> arr[i];
		sum[i] = (sum[i-1] + arr[i])%M;
		if (sum[i] == 0) {
			cnt++;
		}
		mod[sum[i]]++;
	}
	
	for (long long i = 0; i < M; i++) {
		if (mod[i] >= 2) {
			cnt += (mod[i] * (mod[i] - 1) / 2);
		}
	}
	cout << cnt;
	return 0;
}
