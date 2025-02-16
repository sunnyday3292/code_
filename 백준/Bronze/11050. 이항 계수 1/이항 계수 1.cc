#include <iostream>
using namespace std;;
int main() {
    int n;
    int k;
    cin>>n>>k;
    int mul=1;
    int mul2=1;
    for(int i=n;i>k;i--){
        mul*=i;
    }
    for(int i=n-k;i>0;i--){
        mul2*=i;
    }
    
    cout<<mul/mul2;
    
}