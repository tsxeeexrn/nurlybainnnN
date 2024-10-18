#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int countZero = 0, countPositive = 0, countNegative = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num == 0) {
            countZero++;
        } else if (num > 0) {
            countPositive++;
        } else {
            countNegative++;
        }
    }

    cout << countZero << " " << countPositive << " " << countNegative;
    return 0;
}