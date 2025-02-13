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
    
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[s.length()-1] == '1'|| s[s.length() - 1] == '3' || s[s.length() - 1] == '5' || s[s.length() - 1] == '7' || s[s.length() - 1] == '9')cout << "odd";
        else cout << "even";
        cout << "\n";
    }
   
    
}