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
    
    int t; cin >> t;
    while (t--) {
        int s; cin >> s;
        int n; cin >> n;
        int p, q;
        for (int i = 0; i < n; i++) {
            cin >> q >> p;
            s += p * q;
        }
        cout << s << "\n";
    }
   
    
}