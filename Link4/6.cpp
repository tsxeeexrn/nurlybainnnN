#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    int page = (n - 1) / k + 1;
    int line = (n - 1) % k + 1;
    cout << page << " " << line << endl;
    return 0;
}