#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> tree[500010];
vector<int> arr;

void update(int bucket, int node, int start, int end, int x){
	if(node<start || end<node) return;
	tree[bucket].push_back(x);
	if(start != end){
		update(bucket*2, node, start, (start+end)/2, x);
		update(bucket*2+1, node, (start+end)/2+1, end, x);
	}
}

int get(int node, int start, int end, int left, int right, int x){
	if(left>end || right<start) return 0;
	if(left<=start && end<=right) return tree[node].end() - upper_bound(tree[node].begin(), tree[node].end(), x);
	int mid = (start+end)>>1;
	return get(node*2, start, mid, left, right, x) + get(node*2+1, mid+1, end, left, right, x);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m; cin >> n;
	arr.resize(n+10);
	for(int i=1; i<=n; i++){
		cin >> arr[i];
		update(1, i, 1, n, arr[i]);
	}

	for(int i=0; i<500010; i++) sort(tree[i].begin(), tree[i].end());

	cin >> m;
	while(m--){
		int a, b, c; cin >> a >> b >> c;
		cout << get(1, 1, n, a, b, c) << "\n";
	}
}