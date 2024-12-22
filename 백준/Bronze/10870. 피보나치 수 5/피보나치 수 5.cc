#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;;

int recursion(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else {
        return recursion(n - 1) + recursion(n - 2);
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << recursion(n);
}