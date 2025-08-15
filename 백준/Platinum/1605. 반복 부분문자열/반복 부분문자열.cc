#include<iostream>
#include<algorithm>
using namespace std;;
#define ll long long
string s1;
int sa[5000001];
int g[5000001]; //g는 현재 접미사의 그룹 순위
int tg[5000001]; //tg는 다음 그룹 순위
int lcp[5000001];
int t;
int tmp[5000001];

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
    return;
}
void LCP(string s){
    int n=s.length();
    for(int i=0;i<n;i++) tmp[sa[i]]=i;
    int len=0;
    for(int i=0;i<n;i++){
        if(tmp[i]){
            int j=sa[tmp[i]-1];
            while(j+len<n&&i+len<n&&s[j+len]==s[i+len])len++;
            lcp[tmp[i]]=len;
            if(len)len--;
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N; cin>>N;   
    cin>>s1; 
    suffixarray(s1);
    LCP(s1);
    int mx=0;
    for(int i=1;i<s1.length();i++){
        mx=max(mx,lcp[i]);
    }
    cout<<mx;
    
    return 0;
}