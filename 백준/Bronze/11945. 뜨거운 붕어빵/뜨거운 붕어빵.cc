#include <iostream>
#include<string>
using namespace std;
int arr[10][10];

int main() {
	int N, M;
	int temp;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int j = 0;
		for (int k : s) {
			arr[i][j] = k - '0';
			j++;
		}

	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M/2; j++) {
				temp = arr[i][M - j - 1];
				arr[i][M - j - 1] = arr[i][j];
				arr[i][j] = temp;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j];		
		}
		cout << "\n";
	}
}
	