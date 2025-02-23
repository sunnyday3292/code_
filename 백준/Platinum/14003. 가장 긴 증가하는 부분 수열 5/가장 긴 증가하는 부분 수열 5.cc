#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> lis;
vector<int> ans;
int a[1000000];
int pos[1000000];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();

        if (idx == lis.size()) {
            lis.push_back(a[i]);
        }
        else {
            lis[idx] = a[i];
        }

        pos[i] = idx;
    }

    cout << lis.size() << "\n";

    int length = lis.size() - 1;

    for (int i = n - 1; i >= 0; i--) {
        if (pos[i] == length) {
            ans.push_back(a[i]);
            length--;
        }
    }

    reverse(ans.begin(), ans.end());
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}