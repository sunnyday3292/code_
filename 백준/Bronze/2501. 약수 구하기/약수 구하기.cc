#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
int arr[10000];


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,k;
	cin >> n>>k;
	int cnt = 0;;
	for (int i = 1; i <=n; i++) {
		if (n % i == 0) {
			arr[cnt]=i;
			cnt++;
		}
	}
	cout << arr[k - 1];
	
}