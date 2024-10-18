#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    if (n < 10) {
        cout << 0 << endl;  
    } else {
        cout << (n / 10) % 10 << endl;  
    }

    return 0;
}