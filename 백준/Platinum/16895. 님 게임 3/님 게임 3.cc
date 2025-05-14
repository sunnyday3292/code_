#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1001];
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum ^= arr[i];
    }

    if (sum == 0) {
        cout << 0;
    } else {
        int res = 0;
        for (int i = 0; i < n; i++) {
            int target = sum ^ arr[i];
            if (target < arr[i]) res++;
        }
        cout << res;
    }
    return 0;
}
