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
    
    double h, w, n, m;
    cin >> h >> w >> m >> n;
    cout << (int)ceil(h / (m + 1)) * (int)ceil(w / (n + 1));
}