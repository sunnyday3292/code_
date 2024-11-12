#include<iostream>
#include<vector>
using namespace std;;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p;

    int w, v;
    for (int i = 0; i < n; i++) {
        cin >> w >> v;
        p.push_back(make_pair(w, v));
    }
    int arr[101][100001];
    for (int i = 0; i < 101; i++) {
        arr[0][i] = 0;
        arr[i][0] = 0;
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < k + 1; j++) {
            int weight = p[i - 1].first;
            int val = p[i - 1].second;
            if (weight <= j) {
                arr[i][j] = max(arr[i - 1][j - weight] + val, arr[i - 1][j]);
            }
            else { arr[i][j] = arr[i - 1][j]; }
        }
    }
    cout << arr[n][k];
    return 0;
}