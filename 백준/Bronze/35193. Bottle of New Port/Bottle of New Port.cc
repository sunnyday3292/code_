#include<bits/stdc++.h>
using namespace std;
int main(){
    double d;
    cin>>d;

    double a,o,dca,dco;
    cin>>a>>o>>dca>>dco;
    double lefta=a-dca*d;
    double lefto=o-dco*d;
    if(lefta<0){
        cout<<0;
        return 0;
    }

    if(lefto<0)lefto=0;
    cout.precision(10);
    cout<<(lefta/(lefta+lefto))*100;
    return 0;
}