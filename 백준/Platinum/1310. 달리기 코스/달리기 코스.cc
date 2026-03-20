#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Dot{
    int x,y;
};

int N;
vector<Dot>v;
vector<Dot>convexHull;

Dot operator-(Dot a, Dot b) {
    Dot c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

ll cross(const Dot &a, const Dot &b, const Dot &c){
    return 1LL*(b.x-a.x)*(c.y-a.y) - 1LL*(b.y-a.y)*(c.x-a.x);
}

ll getDistance(Dot a,Dot b){
    return 1LL*(a.x-b.x)*(a.x-b.x) + 1LL*(a.y-b.y)*(a.y-b.y);
}
bool compareYPos(Dot a, Dot b){
    if(a.y==b.y)return a.x<b.x;
    return a.y<b.y;
}
bool compareCCW(Dot a, Dot b){
    ll ccw=cross(v[0],a,b);
    if(ccw != 0) return ccw > 0;
    return getDistance(v[0], a) < getDistance(v[0], b);
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>N;
    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    //convex hull 만들기
    sort(v.begin(),v.end(),compareYPos);
    convexHull.push_back(v[0]);
    sort(v.begin()+1,v.end(),compareCCW);
    convexHull.push_back(v[1]);
    for(int i=2;i<N;i++){
        while(convexHull.size()>=2){
            Dot first=convexHull.back();
            convexHull.pop_back();
            Dot second=convexHull.back();

            ll ccw=cross(second,first,v[i]);
            if(ccw>=0){
                convexHull.push_back(first);
                break;
            }
        }
        convexHull.push_back(v[i]);
    }
    
    //rotating calipers
    int l=0,r=0;
    ll mxdist=0;
    int cs=convexHull.size();
    for(int i=0;i<cs;i++){
        if(convexHull[i].x<convexHull[l].x)l=i;
        if(convexHull[i].x>convexHull[r].x)r=i;
    }
    mxdist=getDistance(convexHull[l],convexHull[r]);
    Dot origin({0,0});
    for(int i=0;i<cs;i++){
        if(cross(origin,convexHull[(l+1)%cs]-convexHull[l],convexHull[r]-convexHull[(r+1)%cs])>0){
            l=(l+1)%cs;
        }
        else{
            r=(r+1)%cs;
        }
        ll t=getDistance(convexHull[l],convexHull[r]);
        if(t>mxdist){
            mxdist=t;
        }
    }
    cout<<mxdist;
    return 0;
}