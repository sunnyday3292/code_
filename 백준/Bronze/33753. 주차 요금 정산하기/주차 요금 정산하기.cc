#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>a>>b>>c>>t;
    if(t<=30)cout<<a;
    else cout<<a+ceil((t-30)/b)*c;
}