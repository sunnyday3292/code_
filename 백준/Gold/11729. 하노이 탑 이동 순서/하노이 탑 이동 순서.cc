#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;;

int cnt = 0;

int hanoi(int n,int a, int b) {
    cnt++;
    if (n == 1) {
        cout << a << " " << b<<"\n";
    }
    else {
        int c = 6 - a - b;
        hanoi(n - 1, a, c);
        cout << a <<" "<< b << "\n";
        hanoi(n - 1, c, b);
    }
    return 0;
     
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= 2;
    }
    cout << ans - 1 << "\n";
    hanoi(n, 1, 3);
}
