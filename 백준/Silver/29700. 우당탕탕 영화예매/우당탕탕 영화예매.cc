#include <iostream>
using namespace std;

int arr[1000][5000];

int main() {
    int N,M,K; cin>>N>>M>>K;
    if(K>M){ //동아리원의 수가 가로줄 개수보다 많은 경우
        cout<<0;
        return 0;
    }
    for(int i=0;i<N;i++){ //1과 0이 붙어서 입력받으므로 string으로 받기
        string s;
        cin>>s; //string으로 받고 '0'의 아스키 코드를 빼서 int로 만들기
        for(int j=0;j<M;j++) arr[i][j]=s[j]-'0';
    }
    
    int cnt=0;
    int sum;
    for(int i=0;i<N;i++){
        sum=0;
        for(int j=0;j<K;j++){
            sum+=arr[i][j];
        }
        if(sum==0)cnt++;
        for(int j=K;j<M;j++){
            sum+=arr[i][j];
            sum-=arr[i][j-K];
            if(sum==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}