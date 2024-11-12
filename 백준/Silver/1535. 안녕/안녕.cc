#include<iostream>
#include<vector>
using namespace std;;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> en;
    vector<int> hap;

    int w, v;
    for (int i = 0; i < n; i++) {
        cin >> w ;
        en.push_back(w);
    }
    for (int i = 0; i < n; i++) {
        cin >> v;
        hap.push_back(v);
    }
    int arr[100][21];
    for (int i = 0; i < 21; i++) {
        arr[0][i] = 0;
    }
    for (int i = 0; i < 100; i++) {
        arr[i][0] = 0;
    }

    for (int i = 1; i <100 ; i++) {
        for (int j = 1; j < n+1; j++) {
            int energy= en[j-1];
            int happy = hap[j-1];
            if (energy <= i) {
                arr[i][j] = max(arr[i - energy][j-1] + happy, arr[i][j-1]);
            }
            else { arr[i][j] = arr[i][j-1]; }
        }
    }
    cout << arr[99][n];
    return 0;
}