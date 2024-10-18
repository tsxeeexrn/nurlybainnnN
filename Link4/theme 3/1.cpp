#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a, b, maxDist = 0, maxX = 0, maxY = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        int dist = a * a + b * b;
        if (dist > maxDist) {
            maxDist = dist;
            maxX = a;
            maxY = b;
        }
    }
    cout << maxX << " " << maxY;
    return 0;
}