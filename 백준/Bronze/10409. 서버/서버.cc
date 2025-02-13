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
    int m; cin >> m;
    int s = 0;
    int a;
    int cnt = 0;
    for (int i = 0; i < t; i++) {
        cin >> a;
        s += a;
        if (s <= m) cnt++;
    }
    cout << cnt << "\n";

}