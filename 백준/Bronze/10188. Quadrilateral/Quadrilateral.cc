#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<set>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cout << "X";
            }
            cout << "\n";
        }
        cout << "\n";
    }

}