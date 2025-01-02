#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int arr[5][5];
bool visited[5][5];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int dist=0;
int apple = 0;
int ans = 1000000;

void dfs(int x,int y,int apple,int dist) {
	//visited[x][y] = true;
	if (apple == 3) {
		ans = min(ans, dist);
		return ;
	}

	for (int i = 0; i <4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		if (!visited[next_x][next_y] && arr[next_x][next_y] != -1&&next_x<5&&next_x>=0&& next_y < 5 && next_y>=0) {
			visited[next_x][next_y] = true;
			if (arr[next_x][next_y] == 1)  dfs(next_x, next_y, apple + 1, dist + 1);
			else {
				dfs(next_x, next_y, apple, dist + 1);
			}
			visited[next_x][next_y] = false;
		}
	}
}



int main() {
	int k;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	int a, b;
	cin >> a >> b;
	visited[a][b] = true;
	if (arr[a][b] == 1) {
		dfs(a, b, 1, 0);
	}
	else {
		dfs(a, b, 0, 0);
	}
	if (ans == 1000000) {
		cout << -1; 
	}
	else {
		cout << ans;
	}
}

