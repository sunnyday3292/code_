#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++)
        cin >> B[i];

    vector<int> result;
    int curA = 0, curB = 0;

    while (true)
    {
        int maxVal = -1;
        int nextA = -1, nextB = -1;

        for (int i = curA; i < N; i++)
        {
            for (int j = curB; j < M; j++)
            {
                if (A[i] == B[j])
                {
                    if (A[i] > maxVal)
                    {
                        maxVal = A[i];
                        nextA = i;
                        nextB = j;
                    }
                }
            }
        }
        if (maxVal == -1)
            break;

        result.push_back(maxVal);
        curA = nextA + 1;
        curB = nextB + 1;
    }

    cout << result.size() << '\n';
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ' ';
    }

    return 0;
}