#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100000

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,arr[1001],cnt[1001];
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    int mx=0;

    for(int i=0;i<N;i++){
        int st=arr[i];
        memset(cnt, 0, sizeof(cnt));
        int mxleft=0;
        int mxright=0;
        for(int j=i-1;j>=0;j--){
            int pk=arr[j];
            if(pk>=st)continue;
            int tmp=0;
            
            for(int t=j+1;t<=i;t++){
                if(pk<arr[t])tmp=max(tmp,cnt[t]+1);
            }
            cnt[j]=tmp;
            mxleft=max(mxleft,tmp);
        }
        for(int j=i+1;j<N;j++){
            int pk=arr[j];
            if(pk>=st)continue;
            int tmp=0;
            
            for(int t=j-1;t>=i;t--){
                if(pk<arr[t])tmp=max(tmp,cnt[t]+1);
            }
            cnt[j]=tmp;
            mxright=max(mxright,tmp);
        }
        mx=max(mx,mxleft+mxright);
    }
    cout<<mx+1;

    return 0;
}