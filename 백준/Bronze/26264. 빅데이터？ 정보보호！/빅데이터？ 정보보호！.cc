#include<iostream>
using namespace std;;

int cnt;
int main() {
	int n;cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='y') cnt++;
    }
    if(cnt>n-cnt)cout<<"security!";
    if(cnt<n-cnt)cout<<"bigdata?";
    if(cnt==n-cnt)cout<<"bigdata? security!";
    
    

}