#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, a,b,c;
	cin >> n;
	bool z = false;
	bool m = false;
	int arr[10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
			if (arr[j] == 17) z = true;
			else if (arr[j] == 18) m=true;
		}
		for (int j = 0; j < 10; j++) {
			cout << arr[j]<<" ";
		}
		cout << "\n";
		if (z && m)cout << "both\n";
		else if (z == 0 && m == 0)cout << "none\n";
		else if (z == 1)cout << "zack\n";
		else if(m==1)cout<<"mack\n";
		cout << "\n";
		z = false;
		m = false;
	}
	

}