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
    int p, q;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        cout << "You get " << p / q << " piece(s) and your dad gets " << p % q << " piece(s).\n";
    }
}