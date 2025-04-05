#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check[4]={false,};
int main() {
    string s;cin>>s;
    for(char c:s){
        if(c=='U')check[0]=true;
        if(c=='A')check[1]=true;
        if(c=='P')check[2]=true;
        if(c=='C')check[3]=true;
    }
    for(int j=0;j<4;j++){
        if(!check[j]){
            if(j==0)cout<<'U';
            if(j==1)cout<<'A';
            if(j==2)cout<<'P';
            if(j==3)cout<<'C';
        }
    }
}