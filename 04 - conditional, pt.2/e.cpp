#include <iostream>

using namespace std;

int main()
{
    int p , s ;
    cin>>p>>s;
    if (p == 1 && s == 1 || p != 1 && s != 1){
        cout<<"YES";
    }else
        cout<<"NO";

    return 0;
}
