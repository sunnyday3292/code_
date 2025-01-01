#include <iostream>
using namespace std;

void function(int arr[], int visited[], int count,int length,int depth) {

	if (depth==length) {
		for (int i = 0; i < length; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < count; i++) {
		if (visited[i] == 0) {
			arr[depth] = i+1;
			visited[i] = 1;
			function(arr, visited, count, length, depth+1);
			visited[i] = 0;
		}
	}
	
}

int main() {
	int N,M;
	cin >> N>>M;
	int* array = new int[N];
	int* visited = new int[N];
	for (int i = 0; i < N; i++) {
		array[i] = i + 1;
		visited[i] = 0;
	}
	function(array,visited,N,M,0);



	
}