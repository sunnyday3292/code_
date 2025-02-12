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
    
    long double n; cin >> n;
    cout << fixed;
    cout.precision(7);
    long double r = sqrt(n / M_PI);
    cout << 2 * n / r;

}