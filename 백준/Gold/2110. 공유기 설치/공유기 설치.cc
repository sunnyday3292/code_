#include <iostream>
#include <algorithm>
using namespace std;;

int arr[200000];
int N,C;
void solve(){
    int l=1; int r=arr[N-1]-arr[0];
    int res=0; int mid;
    int cur,cnt;
    while(l<=r){
        mid=(l+r)/2;
        cur=arr[0];
        cnt=1;
        for(int i=1;i<N;i++){
            if(arr[i]>=cur+mid){
                cnt++;
                cur=arr[i];
            }
        }
        if(cnt>=C){
            l=mid+1;
            res=mid;
        }
        else r=mid-1;
    }
    cout<<res;
    return ;
}
int main() {
    cin>>N>>C;
    for(int i=0;i<N;i++)cin>>arr[i];
    sort(arr,arr+N);
    solve();
    return 0;
}