#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int i;
char arr[9];

int main() {
	cin.getline(arr,10);
	
	if (arr[0]-'0' + arr[4]-'0' == arr[8]-'0') cout << "YES";
	else cout  <<"NO"<<"\n";
	
}
	