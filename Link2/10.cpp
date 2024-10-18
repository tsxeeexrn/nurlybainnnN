#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (abs(a - c) <= 1 && abs(b - x) <= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}