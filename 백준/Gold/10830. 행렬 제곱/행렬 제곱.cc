#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000

ll N, B;
ll mat[5][5];
ll tmp[5][5];
ll ans[5][5];

void matmul(ll x[5][5], ll y[5][5])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tmp[i][j]=0;
            for (int k = 0; k < N; k++)
            {
                tmp[i][j] += (x[i][k] * y[k][j]);
            }
            tmp[i][j] %= 1000;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            x[i][j] = tmp[i][j];
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> B;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
        ans[i][i] = 1;
    }
    while (B > 0)
    {
        if (B % 2 == 1)
            matmul(ans, mat);
        matmul(mat, mat);
        B /= 2;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}