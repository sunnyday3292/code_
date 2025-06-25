#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int num=666;
    int cnt = 1;
    while(true){     
        if(cnt==n){
            cout<<num;
            return 0;
        }
        num++;
        if(to_string(num).find("666") != string::npos){ cnt++; }
    }
    return 0;
}