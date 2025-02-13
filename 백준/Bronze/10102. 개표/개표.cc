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
    
    int a = 0; int b = 0;
    int n; cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')a++;
        if (s[i] == 'B')b++;
    }
    if (a > b)cout << 'A';
    if (a < b)cout << 'B';
    if (a == b) cout << "Tie";
    
}