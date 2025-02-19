#include <iostream>
#include <vector>
using namespace std;

int prime(int M,int N){
    vector<bool>v(N+1,true);
    for(int i=2;i*i<=N;i++){
        if(v[i]){
            for(int k=i*i;k<=N;k+=i){
                v[k]=false;
            }
        }
    }
    for(int i=2;i<v.size();i++){
        if(v[i]&&i>=M)cout<<i<<"\n";
    }
    return 0;
}
int main() {
    int M,N;
    cin>>M>>N;
    prime(M,N);
    return 0;
}