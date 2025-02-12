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
    
    int l, w, a;
    cin >> l >> w >> a;
    while (!(l == 0 && w == 0 && a == 0)) {
        if (l == 0)l= a / w;
        if (w == 0)w= a / l;
        if (a == 0)a= l* w;
        cout << l << " " << w << " " << a<<"\n";
        cin >> l >> w >> a;
    }
    
}