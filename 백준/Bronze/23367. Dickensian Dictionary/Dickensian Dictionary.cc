#include <iostream>
using namespace std;

string leftS = "qwertasdfgzxcvb";
string rightS = "yuiophjklnm";

int main() {
    string s;
    cin >> s;
    int rightIdx = 0, leftIdx = 1;

    for (int i = 0; i < leftS.length(); i++) {
        if (s[0] == leftS[i]) {
            leftIdx = 0;
            rightIdx = 1;
            break;
        }
    }

    for (int i = leftIdx, j; i < s.length(); i += 2) {
        for (j = 0; j < leftS.length(); j++) {
            if (s[i] == leftS[j]) break;
        }

        if (j == leftS.length()) {
            cout << "no\n";
            return 0;
        }
    }

    for (int i = rightIdx, j; i < s.length(); i += 2) {
        for (j = 0; j < rightS.length(); j++) {
            if (s[i] == rightS[j]) break;
        }

        if (j == rightS.length()) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
    return 0;
}