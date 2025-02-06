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

	double n,a,b,c,d;
	cin >> n>>a>>b>>c>>d;
	cout << min(ceil(n / a)*b, ceil(n / c) * d);
	

}