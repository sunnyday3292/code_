#include <iostream>
#include <cstring>
using namespace std;
#define MAX 1000001
int tree[4000004];
int n;

void update(int start,int end,int idx,int target, int diff){
    if(target<start||target>end)return;
    tree[idx]+=diff;
    if(start==end)return;
    int mid=(start+end)/2;
    update(start,mid,2*idx,target,diff);
    update(mid+1,end,2*idx+1,target,diff);
}
int query(int start,int end,int idx, int target){
    if(start==end){
        update(1,MAX,1,start,-1);
        return start;
    }
    int mid=(start+end)/2;
    if(target<=tree[2*idx])return query(start,mid,2*idx,target);
    else return query(mid+1,end,2*idx+1,target-tree[2*idx]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    int a,b,c;
    memset(tree,0,sizeof(tree));
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cin>>b;
            cout<<query(1,MAX,1,b)<<"\n";
        }
        else{
            cin>>b>>c;
            update(1,MAX,1,b,c);
        }
    }
    return 0;
}