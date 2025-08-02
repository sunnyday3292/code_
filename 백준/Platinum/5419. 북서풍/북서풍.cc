#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;;
#define ll long long
#define pii pair<int,int>

int tree[400000];

void update(int node, int start,int end, int index){
    if(index<start||end<index) return;
    if(start==end){
        tree[node]++;
        return;
    }
    tree[node]++;
    int mid=(start+end)/2;
    update(node*2,start,mid,index);
    update(node*2+1,mid+1,end,index);
}
int query(int node,int start,int end,int left, int right){
    if(right<start||end<left) return 0;
    if(left<=start&&end<=right) return tree[node];
    int mid=(start+end)/2;
    return query(node*2,start,mid,left,right)+query(node*2+1,mid+1,end,left,right);
}

bool cmp(pii &v1, pii &v2){
    if(v1.first==v2.first) return v1.second>v2.second;//y축 기준 역순 정렬
    else return v1.first<v2.first;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; cin>>T;
    while(T--){
        vector<pii>v; //초기화
        vector<int>vy;
        memset(tree,0,sizeof(tree));
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
            vy.push_back(b);
        }
        sort(v.begin(),v.end(),cmp);
        sort(vy.begin(),vy.end());
        vy.erase(unique(vy.begin(),vy.end()),vy.end());
        ll ret=0;
        for(int i=0;i<n;i++){
            int yidx=lower_bound(vy.begin(),vy.end(),v[i].second)-vy.begin()+1;
            ret+=query(1,1,n,yidx,n);
            update(1,1,n,yidx);
        }
        cout<<ret<<"\n";
    }
    return 0;
}