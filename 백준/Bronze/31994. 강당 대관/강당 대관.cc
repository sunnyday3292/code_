#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;

int main() {
	
	vector<pair<int, string>>v;
	int a;
	string b;
	for(int i = 1; i <= 7; i++) {
		cin >> b >> a;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), greater<>());
	cout << v[0].second;
	
}