#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
int arr[101];


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	int c = a * (b % 10);
	int d = a * ((b % 100) / 10);
	int e = a * (b / 100);
	cout << c << "\n";
	cout << d << "\n";
	cout << e << "\n";
	cout << e * 100 + d * 10 + c;
	
	
}