#include <iostream>
#include <vector>
#include <set>
using namespace std;

int N;

int main() {
    cin>>N;
    vector<string>str(N);
    for(int i=0;i<N;i++){
        cin>>str[i];
    }
    
    set<string>strset;
    
    for(int i=0;i<N;i++){
        bool isNew=true;
        for(auto s: strset){
            if(s.length()!=str[i].length())continue;
            
            string tmp=s+s;
            if(tmp.find(str[i])!=string::npos){
                isNew=false;
                break;
            }
        }
        if(isNew){
            strset.insert(str[i]);
        }
    }
    cout<<strset.size();
    
    return 0;
}