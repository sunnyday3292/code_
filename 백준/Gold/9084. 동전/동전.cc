#include<iostream>
#include<vector>
using namespace std;;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    int n, k;
    int M;
    cin >> T;
    for (int a = 0; a < T; a++) {

        int arr[10001];
        fill_n(arr, 10001, 0);

        cin >> n;
        int money[21];

        for (int i = 0; i < n; i++) {
            cin >> money[i];
        }
        cin >> M;
        arr[0]=1;

        for (int i = 0; i < n; i++) {
            for (int j = money[i]; j <= M; j++) {

                arr[j] =arr[j]+ arr[j - money[i]];
            }
        }
        cout << arr[M]<<"\n";
    }
    return 0;
}