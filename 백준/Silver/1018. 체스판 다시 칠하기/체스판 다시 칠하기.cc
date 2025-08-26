#include <iostream>
#include <algorithm>
using namespace std;
char arr[50][50];
int main() {
    string s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            arr[i][j]=s[j];
        }
    }
    int cntB=0,cntW=0;
    int ans=1e9;
    for(int start=0;start<=n-8;start++){
        for(int starty=0;starty<=m-8;starty++){
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    char c=arr[start+i][starty+j];
                    if((i+j)%2==0&&c!='W')cntW++;
                    if((i+j)%2==1&&c!='B')cntW++;

                    if((i+j)%2==0&&c!='B')cntB++;
                    if((i+j)%2==1&&c!='W')cntB++;
                }
            }
            ans=min({ans,cntB,cntW});
            cntB=0;cntW=0;
        }
    }
    cout<<ans;
    return 0;
}