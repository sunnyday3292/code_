#include <iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 620 && n <= 780) cout << "Red";
	if (n >= 590 && n < 620) cout << "Orange";
	if (n >= 570 && n <590) cout << "Yellow";
	if (n >= 495 && n < 570) cout << "Green";
	if (n >= 450 && n <495) cout << "Blue";
	if (n >= 425 && n <450) cout << "Indigo";
	if (n >= 380 && n <425) cout << "Violet";
	
}
	