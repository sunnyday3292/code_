#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int GCD(int a,int b){
    if(b==0)return a;
    else return GCD(b,a%b);
}

ll LCM(int a,int b){
    int gcd=GCD(a,b);
    return a * b/gcd;
}

int main()
{
   int T;
   cin>>T;
   while(T--){
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b)<<'\n';

   }
        

    return 0;
}