#include <iostream>
using namespace std;

int N;
int A, B;
int turn = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N) {
		int x = N - (N >> 1);
		if (turn) A += x;
		else B += x;
		turn ^= 1;

		N >>= 1;
	}

	cout << A << ' ' << B;
}