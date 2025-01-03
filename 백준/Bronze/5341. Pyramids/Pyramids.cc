#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k > 0) {
        int s = 0;
        for (int i = 1; i <= k; i++) {
            s += i;
        }
        cout << s<<"\n";
        cin >> k;
    }
    
}

