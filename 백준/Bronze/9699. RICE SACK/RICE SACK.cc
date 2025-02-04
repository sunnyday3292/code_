#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
const double PI = 3.1415927;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int a, b,c,d,e;
	for (int i = 0; i < n; i++) {

		cin >> a >> b>>c>>d>>e;
		int mx = max(max(max(max(a, b), c), d), e);
		cout << "Case #" << i + 1 << ": " << mx<<"\n";
	}
}