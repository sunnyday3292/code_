#include <iostream>
using namespace std;;
int sum;
int main() {
    int k;cin>>k;
    for(int j=0;j<k;j++){
    string s;
    cin>>s;
    int before=0;
    sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='O'){
            before++;
        }
        else{
            before=0;
        }
        sum+=before;

    }
    cout<<sum<<"\n";
    }
}