#include <iostream>
#include<bitset>
using namespace std;;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int x; cin>>x;
    bitset<7> bits=x;
    cout<<bits.count();
}