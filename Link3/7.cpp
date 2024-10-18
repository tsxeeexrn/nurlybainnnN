#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    for (int i = 0; i < 100; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}