#include <iostream>
using namespace std;;
int zero[40];
int one[40];



int main() {
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        zero[1]=0;zero[0]=1;
        one[1]=1; one[0]=0;
        for(int i=2;i<=k;i++){
            zero[i]=zero[i-1]+zero[i-2];
            one[i]=one[i-1]+one[i-2];
        }
        cout<<zero[k]<<" "<<one[k]<<"\n";
    }
    return 0;
}