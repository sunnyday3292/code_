#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    string w1,w2,w3;
    vector<int>l;

    cin>>y>>w1>>w2>>w3;
    
    for(int b=2;b<=16;b++){
        int k=y;
        while(k>=b){
            l.push_back(k%b);
            k=(k-k%b)/b;
            //cout<<k;
        }
        l.push_back(k);

        if(l[0]==0&&l[1]==0){
            cout<<b<<' ';
            for(int j=l.size()-1;j>=0;j--){
                if(l[j]>=10){
                    cout<<char('a'+l[j]-10);
                }
                else{
                    cout<<l[j];
                }
            }
            return 0;
        }
        //for(int t : l)cout<<t;
        l.clear();
    }
    cout<<"impossible";
    return 0;
}