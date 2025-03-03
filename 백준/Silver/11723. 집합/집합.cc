#include <iostream>
using namespace std;;

int s=0;
int n;
void solve(string str){
    if(str=="add"){
        cin>>n;
        if(!(s & (1<<n))){
            s |=(1<<n);
        }
    }
    else if(str=="remove"){
        cin>>n;
        if((s & (1<<n))){
            s &=~(1<<n);
        }
    }
    else if(str=="check"){
        cin>>n;
        if(s & (1<<n)) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    else if(str=="toggle"){
        cin>>n;
        s ^= (1<<n);
    }
    else if(str=="all"){
        s |= (1<<21)-1 ;
    }
    else{
        s=0;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int m;
    string str;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>str;
        solve(str);
    }
    return 0;
}