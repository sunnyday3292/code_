#include <iostream>
using namespace std;
#define pii pair<int, int>

int parent[1000000];
int sz[100000];

struct Line{
    pii p1;
    pii p2;
};
int ccw(pii p1, pii p2, pii p3);

bool isIntersect(Line l1, Line l2) {

    pii p1 = l1.p1;
    pii p2 = l1.p2;
    pii p3 = l2.p1;
    pii p4 = l2.p2;

    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4); 
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2); 


    if (p1p2 == 0 && p3p4 == 0) {

        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);
        
        return p3 <= p2 && p1 <= p4;
    }
    
    return p1p2 <= 0 && p3p4 <= 0;
    
}

int ccw(pii p1, pii p2, pii p3) {
    int s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);

    if (s > 0) return 1;
    else if (s == 0) return 0;
    else return -1; 
}
int find(int k){
    if(k==parent[k]) return k;
    return parent[k]=find(parent[k]);
}

void union_(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    parent[b] = a;
    sz[a] += sz[b];
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin>>N;
    Line line[3001];
    for(int i=1;i<=N;i++){
        cin>>line[i].p1.first>>line[i].p1.second>>line[i].p2.first>>line[i].p2.second;
        parent[i]=i;
        sz[i] = 1;
        
    }
    for(int i=1;i<=N-1;i++){
        for(int j=i+1;j<=N;j++){
            if(isIntersect(line[i],line[j])){
                union_(i,j);
            }
        }
    }
    int cnt=0;
    int maximum=0;
    for(int i=1;i<=N;i++){
        if(parent[i]==i){
            cnt++;
            maximum=max(maximum,sz[i]);
        }
    }
    cout<<cnt<<'\n';
    cout<<maximum;


    return 0;
}