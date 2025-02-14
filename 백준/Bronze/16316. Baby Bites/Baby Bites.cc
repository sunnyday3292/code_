#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<set>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;;
string a[1001];


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == to_string(i)) continue;
        else if (a[i] != "mumble") {
            cout << "something is fishy";
            return 0;
        }
    }
    cout << "makes sense";

}