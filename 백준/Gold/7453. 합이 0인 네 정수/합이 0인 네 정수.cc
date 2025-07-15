#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int>sum1,sum2;

int A[4000][4];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin>>N;

    for(int i=0;i<N;i++){
        for(int j=0;j<4;j++) cin>>A[i][j];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sum1.push_back(A[i][0]+A[j][1]);
            sum2.push_back(A[i][2]+A[j][3]);
        }
    }
    long long ans=0;
    sort(sum2.begin(),sum2.end());
    for(int i=0;i<sum1.size();i++){
        int k = (-1)*sum1[i];
        ans+=upper_bound(sum2.begin(),sum2.end(),k)-lower_bound(sum2.begin(),sum2.end(),k);
    }
    cout<<ans;
    return 0;
}
