#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
vector<pair<int,int>>seg;

void init(int node,int start,int end){
    if (start == end){
        seg[node] = {arr[start], start};
        return;
    }
    int mid=(start+end)/2;
    init(node*2,start,mid);
    init(node*2+1,mid+1,end);
    seg[node] = (seg[node * 2].first <= seg[node * 2 + 1].first) ? seg[node * 2] : seg[node * 2 + 1];
}

void update(int node, int start, int end, int idx,int val) {
    if (idx < start || idx > end) return;
    if (start == end){
        seg[node] = {val, start};
        return;
    }
    int mid = (start + end) / 2;
    update(node * 2, start, mid, idx,val);
    update(node * 2 + 1, mid + 1, end, idx,val);
    seg[node] = (seg[node * 2].first <= seg[node * 2 + 1].first) ? seg[node * 2] : seg[node * 2 + 1];
}

pair<int,int> query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) return make_pair(1e9,1e9);
    if (l <= start && end <= r) return seg[node];
    int mid = (start + end) / 2;
    pair<int,int> left = query(node*2, start, mid, l, r);
    pair<int,int> right = query(node*2+1, mid+1, end, l, r);
    return (left.first <= right.first)? left : right;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n;
    arr.resize(n+1,0);
    seg.resize(4*n+4);
    for(int i=1;i<=n;i++)cin>>arr[i];
    init(1,1,n);
    
    cin >> m;
    while(m--){
        int a,b,c;
        cin>>a;
        if(a==1){
            cin>>b>>c;
            update(1,1,n,b,c);
        }
        else{
            cout<<query(1,1,n,1,n).second<<"\n";
        }
    }
    return 0;
}
