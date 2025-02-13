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
    
    long long int t; cin >> t;
    double k;
    while (t--) {
        cin >> k;
        cout << fixed;
        cout.precision(2);
        cout << "$"<< 0.8 * k<<"\n";

    }

}