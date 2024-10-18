#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    Point p[100];
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
    }
    
    double max_dist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dist = sqrt(pow(p[i].x - p[j].x, 2) + pow(p[i].y - p[j].y, 2));
            if (dist > max_dist) {
                max_dist = dist;
            }
        }
    }
    
    cout.precision(15);
    cout << max_dist << endl;
    return 0;
}