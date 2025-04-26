#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;;

vector<int>t(720000,0),p(360000,0);
int ans=0;
int n;
vector<int> table, ansVector;

void makeTable(){
    
    table.resize(360000);
    int s=0;
    for(int e=1;e<p.size();e++){
        while(s>0&&p[s]!=p[e])s=table[s-1];
        if(p[s]==p[e]) table[e]=++s;
    }
}
void kmp(){
    int tsize=t.size();
    int psize=p.size();
    
    int s=0;
    for(int e=0;e<tsize;e++){
        while(s>0&&t[e]!=p[s])s=table[s-1];
        if(t[e]==p[s]){
            if(s==psize-1){
                cout<<"possible";
                return;
            }
            else s++;
        }
    }
    cout<<"impossible";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        t[a]=1;
        t[a+360000]=1;
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        p[b]=1;
    }
    
    
    makeTable();
    kmp();
    return 0;
}