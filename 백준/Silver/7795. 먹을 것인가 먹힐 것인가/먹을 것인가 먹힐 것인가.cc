#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        int cnt = 0, r = 0;

        for (int l = 0; l < n; l++)
        {
            while (r < m && A[l] > B[r])
                r++;
            cnt += r;
        }
        cout << cnt << '\n';
    }

    return 0;
}