#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (abs(a - c) == abs(b - x)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}