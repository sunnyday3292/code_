#include <iostream>
#include <vector>
using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FASTIO;
    string p;
    int size;
    cin>>p;
    while(p!="."){
        vector<int> table;
        size = p.size();
        table.resize(size,0);
        int s = 0;
        for (int e = 1; e < size; e++) {
            while (s > 0 && p[s] != p[e]) s = table[s - 1];
            if (p[s] == p[e]) table[e] = ++s;
        }
        if(p.size()%(p.size()-table[p.size()-1])!=0)cout<<"1"<<"\n";
        else cout<<p.size()/(p.size()-table[p.size()-1])<<"\n";
        cin>>p;
    }
   
}
