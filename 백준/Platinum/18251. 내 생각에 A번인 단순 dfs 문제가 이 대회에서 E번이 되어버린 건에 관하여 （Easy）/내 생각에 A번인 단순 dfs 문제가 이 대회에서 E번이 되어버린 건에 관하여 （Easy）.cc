#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Point
{
    int x, y;
    ll w;
};
int N;
ll W[262144];
int cnt = 1;
vector<Point> p;
void preorder(int x, int y)
{
    if (x * 2 <= N)
        preorder(x * 2, y - 1);
    p.push_back({cnt, y, W[x]});
    cnt++;
    if (x * 2 + 1 <= N)
        preorder(x * 2 + 1, y - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    int h = log2(N)+1;
    ll sum = 0, mx = -1e9;
    for (int i = 1; i <= N; i++)
    {
        cin >> W[i];
        sum += W[i];
        mx = max(mx, W[i]);
    }
    if (mx < 0)
    {
        cout << mx << '\n';
        return 0;
    }
    preorder(1, h);
    ll ans = 0;
    for (int y1 = 1; y1 <= h; y1++)
    {
        for (int y2 = y1; y2 <= h; y2++)
        {
            ll s = 0;
            for (int i = 0; i < N; i++)
            {
                if (p[i].y < y1 || y2 < p[i].y)
                    continue;
                s = max(s + p[i].w, 0LL);
                ans = max(ans, s);
            }
        }
    }
    cout << ans << '\n';

    return 0;
}