#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int arr[3];
int arr2[2];
int main() {

	cin >> arr[0]>>arr[1]>>arr[2]>>arr2[0]>>arr2[1];
	sort(arr, arr + 3);
	sort(arr2, arr2 + 2);
	cout << arr[0] + arr2[0] - 50;

}

	