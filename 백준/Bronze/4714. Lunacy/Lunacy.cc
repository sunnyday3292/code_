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

	double n;
	cin >> n;
	cout<<fixed;
	cout.precision(2);
	while (n >=0) {
		cout << "Objects weighing "<<n<<" on Earth will weigh "<<0.167*n<<" on the moon." << "\n";
		cin >> n;
	}

}