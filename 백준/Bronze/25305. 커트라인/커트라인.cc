#include<iostream>
#include<algorithm>
using namespace std;;

int arr[1000];

int main() {
    int sum=0;
    int n,k; cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<>());
    cout<<arr[k-1];

}