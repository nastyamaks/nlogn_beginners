#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n ;
    cout << (n % 10) + (n / 100) + (n % 100 / 10);
    return 0;
}