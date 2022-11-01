#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = n % 1440;
    cout << m / 60 ;
    cout << " ";
    cout << m % 60 ;
    return 0;
}