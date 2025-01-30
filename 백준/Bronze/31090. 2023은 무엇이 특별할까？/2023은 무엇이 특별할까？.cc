#include<iostream>
#include<cmath>
#include<string>
using namespace std;;

int main() {
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int k = n % 100;
		if ((n + 1) % k == 0)cout << "Good" << "\n";
		else cout << "Bye"<<"\n";
	}


}