#include <iostream>
using namespace std;

long long int h;
long long int dnc(int a,int b,int c) {
	if (b == 0) return 1;
	if (b == 1) return a % c;

	h = dnc(a, b / 2, c)%c;
	if (b % 2 == 0) {
		return (h*h)%c;
	}
	else {
		return (h%c*h%c*(a%c))%c;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout<<dnc(a,b,c);
}