#include<iostream>
#include<algorithm>
using namespace std;;
long long int arr[100000];

long long int func(long long int x) {
	if (x < 0) return (-1) * x;
	else return x;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	int start = 0;
	int end = n-1;
	long long int t= func(arr[start] + arr[end]);
	long long int ans;
	long long int ans2;

	while (start < end) {
		if (t >= func(arr[start] + arr[end])) {
			t = func(arr[start] + arr[end]);
			ans = arr[start];
			ans2 = arr[end];
		}
		if (arr[start] + arr[end] < 0) start++;
		else end--;
	}
	cout << ans <<" "<<ans2;
}
