#include <iostream>
#include <cmath>
using namespace std;;
char a[100];char b[100];
int main() {
    int c,w,l,p;
    while(true){
        cin>>c>>w>>l>>p;
        int ans=1;
        if(c==0&&w==0&&l==0&&p==0)break;
        else{
            for(int i=1;i<4;i++){
                if(i=1)ans=pow(c,w);
                if(i=2)ans=pow(ans,l);
                if(i=3)ans=pow(ans,p);
                
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}