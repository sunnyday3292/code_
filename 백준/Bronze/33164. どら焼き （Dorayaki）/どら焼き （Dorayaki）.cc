#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n,m;
    int a[101],b[101];
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=(a[i]+b[j])*max(a[i],b[j]);
        }
    }
    cout<<sum;
}
