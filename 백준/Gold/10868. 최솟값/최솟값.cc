#include <iostream>
#include <cstring>
using namespace std;
#define MAX 1000001
int tree[4000004];
int arr[1000001];
int n,m;

int init(int node,int start,int end){
    if(start==end) return tree[node]=arr[start];
    int mid=(start+end)/2;
    return tree[node]=min(init(node*2,start,mid),init(node*2+1,mid+1,end));
}

int query(int node,int start,int end,int left,int right){
    if(right<start||left>end)return 1e9;
    if(left<=start&&end<=right)return tree[node];
    int mid=(start+end)/2;
    return min(query(node*2,start,mid,left,right),query(node*2+1,mid+1,end,left,right));
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>arr[i];
    init(1,1,n);
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cout<<query(1,1,n,a,b)<<"\n";
    }
    return 0;
}