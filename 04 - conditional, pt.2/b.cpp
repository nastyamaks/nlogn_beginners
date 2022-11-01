#include <iostream>

using namespace std;

int main()
{
    int k , m , n , min1 = 0;
    cin>>k>>m>>n;
    if (k <= m){
        min1 = k;
    }else if (k >= m){
        min1 = m;
    }if (n <= min1){
        min1 = n;
    }
    cout<<min1;
    return 0;
}
