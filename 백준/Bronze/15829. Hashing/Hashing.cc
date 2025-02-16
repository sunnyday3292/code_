#include <iostream>
#include<cmath>
using namespace std;;
int main() {
    int r=31;
    int M=1234567891;
    int n;cin>>n;
    string s;cin>>s;
    int t=0;
    for(int i=0;i<n;i++){
        t+=(s[i]-'a'+1)*pow(r,i);
    }
    cout<<t%M;
}