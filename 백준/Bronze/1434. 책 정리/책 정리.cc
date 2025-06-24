#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int shelf[1001];
    int books[1001];
    int n, m;
    cin>> n >> m;

    int space = 0;
    for (int i = 0; i < n; i++) {
        cin >> shelf[i];
        space += shelf[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> books[i];
    }
    int j = 0;
    for (int i = 0; i < m; i++) {
        while (j < n) {
            if (shelf[j] >= books[i]) {
                shelf[j] -= books[i];
                space -= books[i];
                break;
            } else {
                j++;
            }
        }
    }
    cout << space;
    return 0;
}