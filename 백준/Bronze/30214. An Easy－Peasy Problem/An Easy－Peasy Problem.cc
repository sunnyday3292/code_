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

	double s1, s2;
	cin >> s1 >> s2;
	if (s1 >= s2 / 2) cout << "E";
	else cout << "H";
}