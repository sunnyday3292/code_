#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int arr[100000];

int main() {
	int cnt = 0;
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	sort(arr, arr + n);
	int start = 0, end = n-1;
	while (start < end) {
		if (arr[start] + arr[end] < x) {
			start=start+1;
		}
		else {
			if (arr[start] + arr[end] > x) {
				end = end - 1;
			}
			else {
				cnt++;
				start = start + 1;
				end = end - 1;
			}
		}
		
	}
	cout << cnt;
	
}