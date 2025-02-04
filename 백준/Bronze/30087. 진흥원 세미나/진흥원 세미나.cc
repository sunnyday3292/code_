#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;;
const double PI = 3.1415927;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<pair<string, string>>v;
	v.push_back({ "Algorithm", "204" });
	v.push_back({ "DataAnalysis", "207" });
	v.push_back({ "ArtificialIntelligence", "302" });
	v.push_back({ "CyberSecurity", "B101" });
	v.push_back({ "Network", "303" });
	v.push_back({ "Startup", "501" });
	v.push_back({ "TestStrategy", "105" });
	int n;
	cin >> n;
	string a;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < 7; j++) {
			if (v[j].first == a) cout << v[j].second << "\n";

		}
	}

}