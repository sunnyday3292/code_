#include<iostream>
#include<math.h>
using namespace std;;


int main() {
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65) sum+=(s[i]-'A'+10)*pow(16,s.length()-i-1);
        else sum+=(s[i]-'0')*pow(16,s.length()-1-i);
    }
    cout<<sum;
    
}