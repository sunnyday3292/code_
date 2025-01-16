#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;;

bool visited[100001] = { false, };
deque<pair<int,int>>q;
int bfs(int k) {
	while (q.front().first != k) {
		int pos = q.front().first;
		int cnt = q.front().second;
		q.pop_front();
		
		if (pos * 2 <= 100000) {
			if (visited[pos* 2] == false) {
				q.push_front(make_pair(pos * 2, cnt));
				visited[pos* 2] = true;
			}
		}
		if (pos - 1 >= 0) {
			if (visited[pos - 1] == false) {
				q.push_back(make_pair(pos - 1, cnt + 1));
				visited[pos -1] = true;
			}
		}
		if (pos + 1 <= 100000) {
			if (visited[pos + 1] == false) {
				q.push_back(make_pair(pos+ 1, cnt + 1));
				visited[pos +1] = true;
			}
		}
		
	}
	return q.front().second;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	q.push_back(make_pair(n,0));
	cout<<bfs(k);
}
