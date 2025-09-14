#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n;
    cin >> n;
    int h[80001];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while(!st.empty()&&st.top()<=h[i])st.pop();
        cnt+=st.size();
        st.push(h[i]);
    }
    cout << cnt;
    return 0;
}