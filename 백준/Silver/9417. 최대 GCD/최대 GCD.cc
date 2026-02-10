#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int GCD(int a,int b){
    if(b==0)return a;
    else return GCD(b,a%b);
}

int main()
{
   int N;
   cin>>N;
   string k;
   getline(cin,k);
   
   vector<int>v;
   while(N--){
    string line;
    getline(cin,line);
    stringstream ss(line);
    int num;
    while(ss>>num){
        v.push_back(num);
    }
    int mx=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            int gcd=GCD(v[i],v[j]);
            if(mx<gcd)mx=gcd;
        }
    }
    cout<<mx<<'\n';
    v.clear();

   }
        

    return 0;
}