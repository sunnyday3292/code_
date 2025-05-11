#include<iostream>
using namespace std;;

int arr[100];

int main(){
	int n; cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum ^= arr[i];
	}
	
	if(sum==0) cout << "cubelover";
	else cout << "koosaga";
	
	return 0;
}