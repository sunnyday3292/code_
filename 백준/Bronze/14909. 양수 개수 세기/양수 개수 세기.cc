#include <iostream>
using namespace std;

int main() {
    int k;
    int cnt = 0;
    while (cin >> k) {
        if (k > 0) cnt++;
    }
    cout << cnt;
}
