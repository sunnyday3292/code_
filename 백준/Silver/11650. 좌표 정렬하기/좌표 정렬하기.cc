#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

bool cmp(vector<long long>& v1, vector<long long>& v2) {
	if (v1[0] == v2[0])
		return v1[1] < v2[1];
	else return v1[0] < v2[0];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;
	vector<vector<long long>> v;
	long long a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(),v.end(),cmp);

	for (auto a: v) {
		cout << a[0] << " " << a[1] << "\n";
	}

}
