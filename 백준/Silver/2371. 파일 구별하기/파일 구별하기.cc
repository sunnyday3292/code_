#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> files(N);

    for (int i = 0; i < N; i++)
    {
        int f;
        cin >> f;
        while (f != -1)
        {
            files[i].push_back(f);
            cin >> f;
        }
    }

    vector<int> need(N, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int same = 0;
            int len = min(files[i].size(), files[j].size());

            for (int k = 0; k < len; k++)
            {
                if (files[i][k] == files[j][k])
                    same++;
                else
                    break;
            }

            need[i] = max(need[i], same + 1);
            need[j] = max(need[j], same + 1);
        }
    }

    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        answer = max(answer, need[i]);
    }

    cout << answer;

    return 0;
}