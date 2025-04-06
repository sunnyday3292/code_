#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[26];

int main() {
    int sum=0;
    int n;cin>>n;
    string s1=to_string(n);
    sum=0;
    for(int i=0;i<s1.length();i++){
        sum+=s1[i]-'0';
    }
    int one = s1.length()*(sum);
    int m;cin>>m;
    string s2=to_string(m);
    sum=0;
    for(int i=0;i<s2.length();i++){
        sum+=s2[i]-'0';
    }
    int two = s2.length()*(sum);
    if(one>two)cout<<1;
    else if(one<two)cout<<2;
    else cout<<0;
}