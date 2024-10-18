#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int y;
    double distance() {
        return sqrt(x * x + y * y);
    }
};

bool compare(Point a, Point b) {
    return a.distance() < b.distance();
}

int main() {
    int n;
    cin >> n;
    Point p[100];
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
    }

    sort(p, p + n, compare);

    for (int i = 0; i < n; i++) {
        cout << p[i].x << " " << p[i].y << endl;
    }
    
    return 0;
}