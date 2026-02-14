#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<int>v(N,0);
    for(int i=1;i<=N;i++){
        int t;
        cin>>t;
        for(int j=0;j<N;j++){
            if(t==0&&v[j]==0){
                v[j]=i;
                break;
            }
            if(v[j]==0)t--;
        }
    }
    for(int k:v)cout<<k<<' ';
    return 0;
}