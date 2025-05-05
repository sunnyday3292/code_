#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int* line = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> line[i];
	}
	sort(line, line + N);

	long long low = 1, high = line[N - 1];
	long long mid = 0;

	int max = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			cnt += line[i] / mid;
		}
		if (cnt >= M) {
			low = mid + 1;
			if (max < mid) {
				max = mid;
			}
        }
		else {
			high = mid-1;
			}
	}
		cout << max;
	
}