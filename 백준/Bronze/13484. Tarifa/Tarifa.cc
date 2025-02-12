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
    
    int x, n;
    cin>> x >> n;
    int p[100];
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        s += p[i];
    }
    cout << x * n +x - s;
    
}