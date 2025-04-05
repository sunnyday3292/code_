#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a,b,i,j;
	cin>>a>>b;
	i = -a + sqrt(a * a - b);
	j = -a - sqrt(a * a - b);

	if (i == j) cout << i;
	else cout << j << " " << i;
}