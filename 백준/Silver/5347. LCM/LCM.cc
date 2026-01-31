#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

long long LCM(int a, int b)
{
    int gcd = GCD(a, b);
    return (long long)a / gcd * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << LCM(a, b) << '\n';
    }
    return 0;
}
