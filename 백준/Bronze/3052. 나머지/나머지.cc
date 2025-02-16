#include <iostream>
using namespace std;;

int cnt;
int arr[42]={0,};
int main() {
    cnt=0;
    for(int j=0;j<10;j++){
        int s;
        cin>>s;
        if(arr[s%42]==0){
            cnt++;
            arr[s%42]++;
        }
    }
    cout<<cnt;
}