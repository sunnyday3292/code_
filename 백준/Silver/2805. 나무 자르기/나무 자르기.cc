#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M;
	cin >> N >> M;
	int* tree = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}
	sort(tree, tree + N);

	long long low = 0, high = tree[N - 1];
	long long mid = 0;

	int max = 0;
	while (low <= high) {
		long long mid = (low + high) / 2;
		long long sum = 0;
		for (int i = 0; i < N; i++) {
			if (tree[i] - mid > 0) {
				sum += tree[i] - mid;
			}
		}
		if (sum >= M) {
			max = mid;
			low = mid + 1;
		}
		else {
			high = mid-1;
		}
	}

	cout << max;
}