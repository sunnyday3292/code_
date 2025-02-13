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
    int a;
    int mx;
    int mn;
    while (t--) {
        mx = -1000001;
        mn = 1000001;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            mx = max(mx, a);
            mn = min(mn, a);
        }
        cout << mn << " " << mx << "\n";

    }
    
    

}