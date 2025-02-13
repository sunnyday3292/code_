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
        int n, m;
        cin >> n >> m;
        cout << m * 2 - n << " " << n - m<<"\n";
    }
}