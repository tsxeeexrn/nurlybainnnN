#include <iostream>
#include <cmath> // Для функции sqrt
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double p = sqrt(a * a + b * b); 
    cout << p << endl; 
    return 0;
}