#include <iostream>
#include<cmath>
using namespace std;
#define pii pair<long long, long long>
typedef long double ld;

struct Line {
    pii p1;
    pii p2;
};

int ccw(pii p1, pii p2, pii p3);

bool isIntersect(Line l1, Line l2) {
    pii p1 = l1.p1;
    pii p2 = l1.p2;
    pii p3 = l2.p1;
    pii p4 = l2.p2;

    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

    if (p1p2 == 0 && p3p4 == 0) {
        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);

        return p3 <= p2 && p1 <= p4;
    }

    return p1p2 <= 0 && p3p4 <= 0;
}

int ccw(pii p1, pii p2, pii p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);

    if (s > 0)
        return 1;
    else if (s == 0)
        return 0;
    else
        return -1;
}
void getPoint(Line l1, Line l2) {
    if (l1.p1 > l1.p2) swap(l1.p2, l1.p1);
    if (l2.p1 > l2.p2) swap(l2.p2, l2.p1);
    ld x1 = l1.p1.first;
    ld x2 = l1.p2.first;
    ld y1 = l1.p1.second;
    ld y2 = l1.p2.second;
    ld x3 = l2.p1.first;
    ld x4 = l2.p2.first;
    ld y3 = l2.p1.second;
    ld y4 = l2.p2.second;
    ld d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    ld dx = (x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4);
    ld dy = (x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4);

    if (d == 0) {
        pii start = max(l1.p1, l2.p1);
        pii end = min(l2.p2, l1.p2);
        if (start == end) {
            cout << start.first << " " << start.second;
        }
    } else {
        cout << fixed;
        cout.precision(10);
        cout << dx/d << " " << dy/d;
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Line line[2];
    for (int i = 0; i <= 1; i++) {
        cin >> line[i].p1.first >> line[i].p1.second >> line[i].p2.first >>
            line[i].p2.second;
    }
    if (isIntersect(line[0], line[1])) {
        cout << 1 << '\n';
        getPoint(line[0], line[1]);
    } else
        cout << 0;
    return 0;
}