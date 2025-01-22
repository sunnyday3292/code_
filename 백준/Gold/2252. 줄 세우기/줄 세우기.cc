#include<iostream>
#include<queue>
using namespace std;;

int N, M;
int indegree[32001];
vector<int>edge[32001];

void topologicalsort() {
	queue<int>q;
	for (int i = 1; i <= N; i++) {
		if (indegree[i] == 0) q.push(i);
	}
	for(int i=1;i<=N;i++){
		int front = q.front();
		for (int i = 0; i < edge[front].size(); i++) {
			indegree[edge[front][i]]--;
			if (indegree[edge[front][i]] == 0) q.push(edge[front][i]);
		}
		cout << front << " ";
		q.pop();
	}

}
int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) indegree[i] = 0;
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		indegree[b]++;
		edge[a].push_back(b);
	}
	topologicalsort();
}