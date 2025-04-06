#include <iostream>
#include <cmath>
using namespace std;;
char a[100];char b[100];
int main() {
    while(true){
        int n; cin>>n;
        if(n==-1)return 0;
        else{
            int s[10],t[10];
            for(int i=0;i<n;i++){
                cin>>s[i]>>t[i];
            }
            int sum=0;
            for(int i=0;i<n;i++){
                if(i!=0){
                    sum+=s[i]*(t[i]-t[i-1]);
                }
                else sum+=s[i]*t[0];
            }
            cout<<sum<<" miles\n";
        }
    }
    return 0;
}