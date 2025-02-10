#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c; cin >> a >> b >> c;
	if(a*b<a + b * c) cout<<1;
	if (a * b > a + b * c) cout << 2;
	if (a * b == a + b * c) cout << 0;
}