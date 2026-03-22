#include <bits/stdc++.h>
using namespace std;

vector<int>party[51];
vector<int>known;
int parent[51];

int Find(int x){
    if(parent[x]==x)return x;
    return parent[x] = Find(parent[x]);
}
void Union(int x,int y){
    x=Find(x);
    y=Find(y);
    parent[x]=y;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,M;
    cin >> N >> M;
    int truth;
    cin>>truth;
    for(int i=1;i<=N;i++)parent[i]=i;
    for(int i=0;i<truth;i++){
        int trueNum;
        cin>>trueNum;
        known.push_back(trueNum);
    }
    int p,prev,num; 
    for(int i=0;i<M;i++){
        int p; cin>>p;
        for(int j=0;j<p;j++){
            if(j>=1){
                prev=num;
                cin>>num;
                Union(prev,num);
            }
            else{
                cin>>num;
            }
            party[i].push_back(num);
        }
    }
    int res=M;
    for(auto people : party){
        bool flag = false;
        for(int person : people){
            if(flag)break;
            for(int know : known){
                if(Find(person)==Find(know)){
                    flag=true;
                    break;
                }
            }
        }
        if(flag)res--;
    }
    cout<<res;
    
    
    return 0;
}