#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;;

int main() {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	char arr1[3] = { s1[0],s2[0],s3[0] };
	char arr2[3] = { 'l','k','p' };
	sort(arr1, arr1 + 3);
	sort(arr2, arr2 + 3);
	for (int i = 0; i < 3; i++) {
		if (arr1[i] != arr2[i]) {
			cout << "PONIX";
			return 0;
		}
	}
	cout << "GLOBAL";

}