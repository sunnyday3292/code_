#include <iostream>
#include <set>
#include<algorithm>
using namespace std;

int n, m;
int a[9] = { 0, };
int arr[9] = { 0, };
bool visited[9] = { 0, };

void dfs(int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (t!=a[i]&&visited[i] == false) {
            visited[i] = true;
            arr[cnt] = a[i];
            t = arr[cnt];
            dfs(i, cnt + 1);
            visited[i] = false;
        }
        
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    dfs(0, 0);
}