#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000
int arr[10001];
int i;

void postorder(int start, int end)
{
    if (start >= end)
        return;
    for (i = start + 1; i < end; i++)
    {
        if (arr[start] < arr[i])
            break;
    }

    postorder(start + 1, i);
    postorder(i, end);
    cout << arr[start] << '\n';
    return;
}

int main()
{
    // preorder -> postorder
    int k;
    int cnt = 0;
    while (cin>>k)
    {
        arr[cnt++] = k;
    }
    postorder(0,cnt);
    return 0;
}