#include <iostream>
using namespace std;

int main() {
    int n;  
    cin >> n;
    int x = n / 100;         
    int y = (n / 10) % 10;      
    int z = n % 10;             
    int sum = x + y + z;
    cout << sum << endl;  
    return 0;
}