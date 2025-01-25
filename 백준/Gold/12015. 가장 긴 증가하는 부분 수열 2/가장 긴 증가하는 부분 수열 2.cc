#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int arr[1000001];
vector<int>lis;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++) {
		if (lis.size() == 0 || lis[lis.size()-1] < arr[i]) {
			lis.push_back(arr[i]);
		}
		else{
			int k= lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
			lis[k] = arr[i];
		}
	}
	cout << lis.size()<<"\n";
	
	
	
}