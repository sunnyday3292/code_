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
	int cnt = 0;
	char name[11];
	bool b = false;
	for (int a = 0; a < 5; a++) {
		cin.getline(name, 11);
		for (int i = 0; i < 11; i++) {
			if (i<8&&name[i] == 'F' && name[i + 1] == 'B' && name[i + 2] == 'I') {
				cout << a+1<<" ";
				b = true;
				break;
			}
		}
		char name[11] = { '0', };
	}
	if (b == false) cout << "HE GOT AWAY!";
	return 0;

	
}