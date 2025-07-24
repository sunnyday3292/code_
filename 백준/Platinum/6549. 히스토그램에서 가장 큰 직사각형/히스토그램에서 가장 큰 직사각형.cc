#include <iostream>
#include <stack>
using namespace std;

void solve(int N){
    long long int arr[100004] = {
        0};
    stack<long long int> s;
    for (long long int i = 1; i <= N; i++)
        cin >> arr[i];
    s.push(0);
    long long int res = 0;
    arr[N + 1] = 0;
    for (long long int i = 1; i <= N + 1; i++)
    {
        while (!s.empty() && arr[s.top()] > arr[i])
        {
            long long int k = s.top();
            s.pop();
            res = max(res, arr[k] * (i - s.top() - 1));
        }
        s.push(i);
    }
    cout << res<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int N;
    cin >> N;
    while(N!=0) {
        solve(N);
        cin>>N;
    }
    return 0;
}