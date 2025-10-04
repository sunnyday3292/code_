#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int x1,y1,x2,y2,r1,r2;
        int res;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        double sub=r1>r2?r1-r2:r2-r1;
        
        if(dist==0&&r1==r2)res=-1;
        else if (dist<(r1+r2)&&(sub<dist))res=2;
        else if (dist==(r1+r2)||(sub==dist))res=1;
        else res=0;
        cout<<res<<"\n";    
    }
    return 0;
}