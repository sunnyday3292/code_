#include<iostream>
#include<algorithm>
using namespace std;;

int arr[1000];

int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<>());
    cout<<s;

}