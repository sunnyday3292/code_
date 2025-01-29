#include<iostream>

using namespace std;;
int arr[100000];


int main() {
	int T;
	long long int a;
	long long int b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		int ans= a % 10;
		for (int i = 0; i < b-1; i++) {
			ans =ans* a;
			ans %= 10;
		}
        if(ans==0) cout<<"10"<<"\n";
		else cout << ans<<"\n";

	}
}
