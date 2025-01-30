#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;;

int main() {
	
	int a,p,c;
	cin >> a>>p>>c;

	int sum = 0;
	if (a+c >p) sum += a+c;
	else sum += p;

	cout << sum;
	
}