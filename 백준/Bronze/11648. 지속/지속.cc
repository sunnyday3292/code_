#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    while(s.size()!=1){
        int t=1;
        for(char c : s) t*=c-'0';
        s=to_string(t);
        cnt++;
    }
    cout<<cnt;
}