#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (a == c || b == x) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}