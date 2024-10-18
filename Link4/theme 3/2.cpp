#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    int n;
    cin >> n;
    Point p[100];
    double sumX = 0, sumY = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
        sumX += p[i].x;
        sumY += p[i].y;
    }

    cout.precision(15);
    cout << sumX / n << " " << sumY / n << endl;
    return 0;
}