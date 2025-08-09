#include<iostream>
#include<algorithm>
using namespace std;;
string s1,s2;
int sa[2000001];
int g[2000001]; //g는 현재 접미사의 그룹 순위
int tg[2000001]; //tg는 다음 그룹 순위
int lcp[2000001];
int t;

bool cmp(int a,int b){
    if(g[a]==g[b]) return g[a+t]<g[b+t];
    return g[a]<g[b];
}

void suffixarray(string s){
    int n=s.length();
    t=1; g[n]=-1;
    for(int i=0;i<n;i++){
        sa[i]=i;
        g[i]=s[i]-'a';
    }
    while(t<=n){
        sort(sa,sa+n,cmp);//그룹간 순위를 이용해 sa를 정렬
        tg[sa[0]] = 0;
        for(int i=1;i<n;i++){//정렬된 sa에서
            tg[sa[i]]=tg[sa[i-1]]+(cmp(sa[i-1],sa[i])?1:0);//sa 배열의 i-1과 i번째 배열중 무엇이 큰지 결정해 tg를 업데이트
        }
        for(int i=0;i<n;i++)g[i]=tg[i];
        t*=2;
    }
    //for(int i=0;i<n;i++)cout<<sa[i]+1<<" ";
    //cout<<"\n";
    return;
}
void LCP(string s){
    int n=s.length();
    int tmp[200001]{};
    for(int i=0;i<n;i++) tmp[sa[i]]=i;
    int len=0;
    for(int i=0;i<n;i++){
        if(tmp[i]){
            int j=sa[tmp[i]-1];
            while(s[j+len]==s[i+len])len++;
            lcp[tmp[i]]=len;
            if(len)len--;
        }
    }
    //for(int i=0;i<n;i++)cout<<lcp[i]<<" ";
    return;
}
int main(){
    cin>>s1>>s2;
    string ss=s1+"#"+s2;
    int m=s1.length();
    suffixarray(ss);
    LCP(ss);
    int mx=0;
    int k=0;
    for(int i=1;i<ss.length();i++){
        if(sa[i-1]>=m&&sa[i]<m||(sa[i-1]<m&&sa[i]>=m)){
            if(lcp[i]>mx){
                mx=lcp[i];
                k=sa[i];
            }
        }
    }
    cout<<mx<<"\n";
    for(int i=k;i<mx+k;i++)cout<<ss[i];
    
    return 0;
}