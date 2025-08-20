#include<iostream>
using namespace std;
#define MOD 1000000009
int arr[1000001];

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int T; cin>>T;
    arr[1]=1; arr[2]=2;arr[3]=4;
    
    for(int i=4;i<=1000000;i++){
        arr[i]=((arr[i-1]+arr[i-2])%MOD+arr[i-3])%MOD;
    } 
    while(T--){
        int n; cin>>n;
        cout<<arr[n]<<"\n";     
    }
    return 0;
}