#include <iostream>
#include<vector>
using namespace std;;
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL);

int arr[2000001];
vector<int>p;
int n;

void manachar(){

    int r=0,c=0;
    p.resize(n,0);

    for(int i=0,m;i<n;i++){
        m=2*c-i;
        if(i<=r) p[i]=min(r-i,p[m]);
        while(i+p[i]+1<n&&i-p[i]-1>=0&&arr[i+p[i]+1]==arr[i-p[i]-1])
            p[i]++;
        if(i+p[i]>r){
            c=i;
            r=i+p[i];
        }
    }
}

int main() {
    FASTIO;
    cin>>n;
    for(int i=0;i<n;i++){
        arr[i*2]=0;
        cin>>arr[i*2+1];
    }
    n=n*2+1;
    arr[n-1]=0;
        
    manachar();
    int m;cin>>m;
    int s,e;
    for(int i=0;i<m;i++){
        cin>>s>>e;
        s--;e--;
        if(p[s+e+1]>=e-s+1)cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}