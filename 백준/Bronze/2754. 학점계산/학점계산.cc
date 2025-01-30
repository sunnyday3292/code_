#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string grade;
	cin >> grade;
	if (grade == "A+") {
		cout << "4.3";
		return 0;
	}
	if (grade == "A0") {
		cout << "4.0";
		return 0;
	}
	if (grade == "A-") {
		cout << "3.7";
		return 0;
	}
	if (grade == "B+") {
		cout << "3.3";
		return 0;
	}
	if (grade == "B0") {
		cout << "3.0";
		return 0;
	}
	if (grade == "B-") {
		cout << "2.7";
		return 0;
	}
	if (grade == "C+") {
		cout << "2.3";
		return 0;
	}
	if (grade == "C0") {
		cout << "2.0";
		return 0;
	}
	if (grade == "C-") {
		cout << "1.7";
		return 0;
	}
	if (grade == "D+") {
		cout << "1.3";
		return 0;
	}
	if (grade == "D0") {
		cout << "1.0";
		return 0;
	}
	if (grade == "D-") {
		cout << "0.7";
		return 0;
	}
	if (grade == "F") {
		cout << "0.0";
		return 0;
	}
}