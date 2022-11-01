#include <iostream>

using namespace std;

int main()
{
    int a , b , c;
    cin>>a>>b>>c;
    if ((a % 2 == 1 || b % 2 == 1 || c % 2 == 1) && (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)){

        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}
