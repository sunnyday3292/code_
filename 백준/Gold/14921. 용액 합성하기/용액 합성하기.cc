#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin>>N;
    int A[100001];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    int l=0;int r=N-1;
    long long res=LLONG_MAX;
    while(l<r){
        long long sum=A[l]+A[r];
        if(abs(sum)<abs(res)){
            res=sum;
        }
        else{
            if(sum>0) r--;
            else l++;
        }
    }
    cout<<res;
    
    return 0;
}