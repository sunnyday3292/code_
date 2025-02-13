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
        string s;
        set<int>v;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            v.insert(s[i]);
        }
        for (auto iter = v.begin(); iter != v.end();iter++) {
            sum += *iter;
        }
        cout << 2015-sum<<"\n";
    }
}