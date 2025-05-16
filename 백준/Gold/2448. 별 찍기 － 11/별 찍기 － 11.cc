#include <iostream>
#include <cstring>
using namespace std;

char c[3072][6144];

void star(int x, int y, int n) {
	if (n == 3) {
		c[x][y] = '*';
		c[x + 1][y - 1] = '*';
		c[x + 2][y - 2] = '*';
		c[x + 2][y - 1] = '*';
		c[x + 2][y] = '*';
		c[x + 2][y + 1] = '*';
		c[x + 2][y + 2] = '*';
		c[x + 1][y + 1] = '*';
	}
	else {
		star(x, y, n / 2);
		star(x + n / 2, y - n / 2, n / 2);
		star(x + n / 2, y + n / 2, n / 2);
	}
}

int main() {
	int n;
	cin>>n;
	memset(c, ' ', sizeof(c));

	star(0,n-1,n);
	for(int i=0;i<n;i++) {
		for(int j=0;j<2*n-1;j++) {
			cout<<c[i][j];
		}
		cout << '\n';
	}
	return 0;
}