#include <iostream>
using namespace std;

int main() {
    string k;
    cin >> k;

    while (k != "0") {
        cout<<k<<" ";
        while (k.length() > 1) {
            int mul = 1;
            for (char digit : k) {
                mul *= (digit - '0');
            }
            cout << mul << " ";
            k = to_string(mul);
        }
        cout << "\n";
        cin >> k;
    }
}
