#include <iostream>
#include <cstring>
using namespace std;
#define ll long long
ll tree[4000004];
ll arr[1000001];
int n,q;

ll init(int node,int start,int end){
    if(start==end) return tree[node]=arr[start];
    int mid=(start+end)/2;
    return tree[node]=init(node*2,start,mid)+init(node*2+1,mid+1,end);
}

ll query(int node,int start,int end,int left,int right){
    if(right<start||left>end)return 0;
    if(left<=start&&end<=right)return tree[node];
    int mid=(start+end)/2;
    return query(node*2,start,mid,left,right)+query(node*2+1,mid+1,end,left,right);
}

ll update(ll node,ll start, ll end,ll index,ll val){
    if(index<start||index>end) return tree[node];
    if(start==end) return tree[node]+=val;
    else{
        int mid=(start+end)/2;
        return tree[node]=update(node*2,start,mid,index,val)+update(node*2+1,mid+1,end,index,val);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    init(1,1,n);
    int x,y,a,b;
    for(int i=0;i<q;i++){
        cin>>x>>y>>a>>b;
        if(x>y)swap(x,y);
        cout<<query(1,1,n,x,y)<<"\n";
        update(1,1,n,a,b-arr[a]);
        arr[a] = b;
    }
    return 0;
}