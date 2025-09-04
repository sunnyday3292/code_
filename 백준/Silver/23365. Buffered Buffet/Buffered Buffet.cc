#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio (false);
    cin.tie (NULL);

    int n; cin>>n;
    int arr[100001];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll ans=2*arr[n-1];
    for(int i=n-2;i>=1;i--){
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}