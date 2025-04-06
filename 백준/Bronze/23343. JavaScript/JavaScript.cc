#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]-'0'>=0&&s1[i]<='9') continue;
        else{
            cout<<"NaN";
            return 0;
        }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]-'0'>=0&&s2[i]<='9') continue;
        else{
            cout<<"NaN";
            return 0;
        }
    }
    cout<<stoi(s1)-stoi(s2);
    
}