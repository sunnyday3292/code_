#include <bits/stdc++.h>
using namespace std;
#define MAX 1e9

void solve(int x, int y)
{
    int mcnt = 0;
    int length = y - x;
    int d = sqrt(length);
    pow(d, 2) == length ? mcnt = 2 *d - 1 : mcnt = 2 * d;
    if (length > d * (d + 1))
        mcnt++;
    cout << mcnt << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        solve(x, y);
    }

    return 0;
}