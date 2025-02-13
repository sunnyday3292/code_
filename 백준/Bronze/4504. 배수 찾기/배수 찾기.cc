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
    
    int n; cin >> n;
    int p;
        cin >> p;
        while (p != 0) {
            if (p % n == 0)cout << p << " is a multiple of " << n << ".\n";
            else cout << p << " is NOT a multiple of " << n << ".\n";
            cin >> p;
        }
}