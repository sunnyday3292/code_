#include <iostream>
#include<vector>
using namespace std;;
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL);
string s, tmp ="#", st="#";
int ans=0;
vector<int>p;

void manachar(){
    for(char c:s){
        st+=c;
        st+=tmp;
    }
    int len = st.size(),c=0,r=0,ci=0;
    p.resize(len,0);

    for(int i=0,m;i<len;i++){
        m=2*c-i;
        if(i<r) p[i]=min(r-i,p[m]);
        while(i+p[i]+1<len&&i-p[i]-1>=0&&st[i+p[i]+1]==st[i-p[i]-1])
            p[i]++;
        if(i+p[i]>r){
            c=i;
            r=i+p[i];
        }
    }
    for(int i=0;i<len;i++){
        if(p[i]>ans){
            ans=p[i];
            ci=i;
        }
    }
}

int main() {
    FASTIO;
    cin>>s;
    manachar();
    cout<<ans<<"\n";
    return 0;
}