#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int arr[1000001];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int start=0;int end=N-1;
        int before=1e9;
        int cnt=0;
        
        while(start<end){
            int summed=arr[start]+arr[end];
            int q=abs(summed-K);
            if(q<before){
                before=q;
                cnt=1;
            }
            else if(q==before){
                cnt++;
            }
            
            if(summed>K){
                end--;
            }
            else if(summed==K){
                start++;
                end--;
            }
            else{
                start++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}