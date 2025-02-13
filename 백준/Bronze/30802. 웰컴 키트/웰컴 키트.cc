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
    
    long long int n; cin >> n;
    long long int a[6];
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    long long int t, p;
    cin >> t >> p;
    long long int s = 0;
    for (int i = 0; i < 6; i++) {
        s+=ceil((double)a[i]/t);
    }
    cout << s<<"\n";
    cout << n / p << " " << n % p;
}