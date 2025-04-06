#include <iostream>
#include <cmath>
using namespace std;;

int main() {
    char a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    char b[4];
    for(int i=0;i<4;i++)cin>>b[i];
    int cnt=0;
    for(int i=0;i<4;i++){
        if(a[i]!=b[i])cnt++;
    }
    cout<<pow(2,cnt);
}