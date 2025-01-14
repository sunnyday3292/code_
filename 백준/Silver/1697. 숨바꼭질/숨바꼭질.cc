#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;;

bool visited[100001] = { false, };
queue<pair<int,int>>q;
int bfs(int k) {
	while (q.front().first != k) {
		int cnt = q.front().second;
		if (q.front().first - 1 >= 0) {
			if (visited[q.front().first - 1] == false) {
				q.push(make_pair(q.front().first - 1, cnt + 1));
				visited[q.front().first -1] = true;
			}
		}
		if (q.front().first + 1 <= 100000) {
			if (visited[q.front().first + 1] == false) {
				q.push(make_pair(q.front().first + 1, cnt + 1));
				visited[q.front().first +1] = true;
			}
		}
		if (q.front().first * 2 <= 100000) {
			if (visited[q.front().first * 2] == false) {
				q.push(make_pair(q.front().first * 2, cnt + 1));
				visited[q.front().first * 2] = true;
			}
		}
		q.pop();
	}
	return q.front().second;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	q.push(make_pair(n,0));
	cout<<bfs(k);
}
