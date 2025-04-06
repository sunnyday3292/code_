#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;cin>>n;
    int t;
    int sum=0;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>t;
        if(sum+t<0){
            k += (-1)*(sum+t);
            sum=0;
        }
        else sum+=t;
    }
    cout<<k;
    
}