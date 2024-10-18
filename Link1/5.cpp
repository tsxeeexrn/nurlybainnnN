#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int distance = v * t;
    int position = (distance % 109 + 109) % 109;

    cout << position << endl;

    return 0;
}