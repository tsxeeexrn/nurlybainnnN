#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int count = 0;
    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            count++;
            if (i != x / i) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}