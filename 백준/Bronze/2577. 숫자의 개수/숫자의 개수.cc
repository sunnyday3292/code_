#include <iostream>
using namespace std;;
int main() {
    int arr[10]={0,};
    int a,b,c;
    cin>>a>>b>>c;
    long long int t=a*b*c;
    string s=to_string(t);
    for(int i=0;i<s.length();i++){
        arr[s[i]-'0']++;
    }
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<"\n";
    }
}