#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

typedef long long ll;
#define INF LLONG_MAX

void max_init(vector<ll> &a, vector<ll> &tree, int node, int start, int end)
{
    if (start == end)
        tree[node] = a[start];
    else
    {
        max_init(a, tree, node * 2, start, (start + end) / 2);
        max_init(a, tree, node * 2+1, (start + end) / 2 + 1, end);
        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    }
}
void min_init(vector<ll> &a, vector<ll> &tree, int node, int start, int end)
{
    if (start == end)
        tree[node] = a[start];
    else
    {
        min_init(a, tree, node * 2, start, (start + end) / 2);
        min_init(a, tree, node * 2+1, (start + end) / 2 + 1, end);
        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    }
}

long long max_query(vector<long long> &tree, int node, int start, int end, int left, int right)
{
    if (left > end || right < start)
    {
        return LLONG_MIN;;
    }
    if (left <= start && end <= right)
    {
        return tree[node];
    }
    long long l = max_query(tree, node * 2, start, (start + end) / 2, left, right);
    long long r = max_query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return max(l, r);
}
long long min_query(vector<long long> &tree, int node, int start, int end, int left, int right)
{
    if (left > end || right < start)
    {
        return INF;
    }
    if (left <= start && end <= right)
    {
        return tree[node];
    }
    long long l = min_query(tree, node * 2, start, (start + end) / 2, left, right);
    long long r = min_query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
    return min(l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int tree_size = 1 << ((int)ceil(log2(n)) + 1);
    vector<ll> max_tree(tree_size);
    vector<ll> min_tree(tree_size);
    max_init(a, max_tree, 1, 0, n - 1);
    min_init(a, min_tree, 1, 0, n - 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--; y--;
        cout << min_query(min_tree, 1, 0, n - 1, x, y) << " " << max_query(max_tree, 1, 0, n - 1, x, y) << "\n";
    }
    return 0;
}
