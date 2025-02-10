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
	
	int arr[3];
	char c;
	cin >> arr[0] >> c >> arr[1] >> c >> arr[2];
	if (arr[0] + arr[2] < arr[1]||arr[1]==0) cout << "hasu";
	else cout << "gosu";
}