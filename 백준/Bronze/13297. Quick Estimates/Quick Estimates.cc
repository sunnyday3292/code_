#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[101];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i].length()<<"\n";
    }
}