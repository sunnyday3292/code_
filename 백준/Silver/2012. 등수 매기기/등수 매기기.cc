#include <iostream>
#include <algorithm>
using namespace std;
long long student[500001];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>student[i];
    sort(student,student+n);
    long long res=0;
    for(int i=1;i<=n;i++){
        if(i!=student[i-1])res+=abs(student[i-1]-i);
    }
    cout<<res;
    return 0;
}