#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    stack<int>st;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty())ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    for(auto &it:ans)cout<<it<<" ";
    cout<<'\n';
    return 0;
}