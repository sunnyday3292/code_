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
	long long int arr[3];
	cin >>arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	cout << arr[1];
	
	

}