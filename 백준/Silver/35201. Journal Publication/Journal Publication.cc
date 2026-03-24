#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,p;
    cin>>n;
    string a,mxa;
    vector<string>ans;
    vector<string>vec;
    mxa="A";
    for(int i=0;i<n;i++){
        cin>>p;
        bool change=false;

        for(int j=0;j<p;j++){
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        for(string tmp : vec){
            if(tmp>=mxa){
                mxa=tmp;
                change=true;
                break;
            }
        }
        vec.clear();
        if(!change){
            cout<<"impossible";
            return 0;
        }
        else{
            ans.push_back(mxa);
        }
    }
    for(string st:ans)cout<<st<<'\n';
    return 0;
}