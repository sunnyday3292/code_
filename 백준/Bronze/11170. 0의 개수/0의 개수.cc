#include <iostream>
using namespace std;

int main() {
    int T;
    int n,m;
    cin>>T;
    while(T--){
        cin>>n>>m;
        int cnt=0;
        for(int i=n;i<=m;i++){
            string k=to_string(i);
            for(int j=0;j<k.length();j++){
                if(k[j]=='0')cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}