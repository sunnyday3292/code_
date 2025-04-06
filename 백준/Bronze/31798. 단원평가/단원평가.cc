#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0){
        cout<<c*c-b;
    }
    if(b==0){
        cout<<c*c-a;
    }
    if(c==0){
        cout<<sqrt(a+b);
    }
    
}