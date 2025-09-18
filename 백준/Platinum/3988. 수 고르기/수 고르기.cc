#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> V(n);
    deque<pair<int, int>> dq;

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    int t= n-k-1;
    int ans = V[n - 1] - V[0];
    
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        int d = V[i + 1] - V[i];
        if (!dq.empty() && dq.front().second <= i - t)
            dq.pop_front();
        while (!dq.empty() && dq.back().first > d)
            dq.pop_back();
        dq.push_back({d, idx});
        if(i+1>=t){
            int M=V[i+1]-V[i+1-t];
            ans=min(ans,dq.front().first+M);
        }
    }

    cout << ans;
    return 0;
}