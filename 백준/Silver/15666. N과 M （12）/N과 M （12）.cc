#include <iostream>
#include<algorithm>
using namespace std;

int n, m;
int a[64] = { 0, };
int arr[64] = { 0, };
bool visited[64] = { 0, };

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
    for (int i = num; i < n*m; i++)
    {
        if (t!=a[i]&&visited[i] == false) {
            visited[i] = true;
            arr[cnt] = a[i];
            t = arr[cnt];
            dfs(i+1, cnt + 1);
            visited[i] = false;
        }
        
    }
}

int main() {
    cin >> n >> m;
    int k;
    int b = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for(int j = 0; j < m; j++) {
            a[b++] = k;
        }
    }
  
    sort(a, a + n*m);
    dfs(0, 0);
}