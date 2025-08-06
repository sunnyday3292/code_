#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr, seg, temp;

void update(int node, int start, int end, int idx) {
    if (idx < start || idx > end) return;
    seg[node]++;
    if (start == end) return;
    int mid = (start + end) / 2;
    update(node * 2, start, mid, idx);
    update(node * 2 + 1, mid + 1, end, idx);
}

int query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) return 0;
    if (l <= start && end <= r) return seg[node];
    int mid = (start + end) / 2;
    return query(node * 2, start, mid, l, r) +
           query(node * 2 + 1, mid + 1, end, l, r);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    arr.resize(n+1);
    temp.resize(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    for (int i = 1; i <= n; i++) {
        arr[i] = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
    }

    int size = temp.size();
    seg.resize(size * 4);

    long long inv_count = 0;
    for (int i = n; i >= 1; i--) {
        inv_count += query(1, 1, size, 1, arr[i]-1);
        update(1, 1, size, arr[i]);
    }
    cout << inv_count << "\n";
    return 0;
}