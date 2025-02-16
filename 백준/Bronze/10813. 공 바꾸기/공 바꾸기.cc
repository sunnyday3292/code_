#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int a[101];
int main() {
    int n,m;
    int i,j;
    cin>>n>>m;
    for(int i=1;i<=n;i++) a[i]=i;
    for(int t=0;t<m;t++){ 
        cin>>i>>j;
        swap(a[i],a[j]);
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}