#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool bb= true;
    int start1,start2,end1,end2;
    int arr[1000][1000];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1&&bb){
                start1=i;start2=j;bb=false;
            }
            else if(arr[i][j]==1&&!bb){
                end1=i,end2=j;
            }
        }
    }
    cout<<abs(start1-end1)+abs(start2-end2);
}