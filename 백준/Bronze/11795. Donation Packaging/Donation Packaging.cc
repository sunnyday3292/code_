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
    
    int t;
    cin >> t;
    int a, b, c;
    int sa = 0;
    int sb = 0;
    int sc = 0;
    for (int i = 0; i < t; i++) {

        cin >> a >> b >> c;
        sa += a;
        sb += b;
        sc += c;
        int s = min(min(sa, sb), sc);
        if (s<30) {
            cout << "NO"<<"\n";
        }
        else {
            cout << s<<"\n";
            sa -= s;
            sb -= s;
            sc -= s;
        }

    }
    
    
}