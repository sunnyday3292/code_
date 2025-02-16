#include<iostream>
#include<math.h>
using namespace std;;

int main() {
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
    
        int ans;
        for(int i=0;i*i<=n;i++){
            ans=i;
        }
        cout<<ans<<"\n";
    }
}