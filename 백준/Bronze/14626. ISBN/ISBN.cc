#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int num;
    int sum=0;
    int index=1;
    int r;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='*'){
            r=index;
        }
        else{
            num=s[i]-'0';
            sum+=num*index;
        }
        if(index==1)index=3;
        else index=1;
    }
    int check=s[s.length()-1]-'0';
    for(int i=0;i<=9;i++){
        if((r*i+sum)%10==(10-check)%10){
            cout<<i;
            break;
        }
    }
    return 0;
}