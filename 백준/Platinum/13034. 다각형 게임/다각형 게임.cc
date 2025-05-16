#include <iostream>
using namespace std;;

int main() {
    int N; cin>>N;
    int g[1001];
    g[0]=0;
    g[1]=0;
    g[2]=1;
    for(int i=3;i<=1000;i++){
        int cur[1001]={0,};
        for(int j=0;j<=i/2+1;j++){
            int l=j; int r=i-2-j;
            cur[g[l]^g[r]]=1;
        }
        for(int k=0;k<i;k++){
            if(cur[k]==0){
                g[i]=k;
                break;
            }
        }
    }
    if(g[N]==0) cout<<2;
    else cout<<1;
    
    return 0;
}