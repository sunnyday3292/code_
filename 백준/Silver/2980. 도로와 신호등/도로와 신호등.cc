#include <iostream>
#include <vector>
using namespace std;
int N,L;
int main() {
    cin>>N>>L;
    vector<int>D(N),G(N),R(N);
    for(int i=0;i<N;i++){
        cin>>D[i]>>R[i]>>G[i];
    }
    int ord=0,cnt=0;
    for(int i=0;i<L;i++){
        if(i==D[ord]){
            if(cnt%(R[ord]+G[ord])==0){
                cnt+=R[ord];
            }
            else if(cnt%(R[ord]+G[ord])<R[ord]){
                cnt+=R[ord]-(cnt%(R[ord]+G[ord]));
            }
            ord++;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}