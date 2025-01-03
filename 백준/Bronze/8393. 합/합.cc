#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    long long s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        s += i + 1;
    }
    cout << s;
}

