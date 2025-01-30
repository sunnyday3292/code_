#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
int arr[500001];
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	
	cout << s-(n-1);

}