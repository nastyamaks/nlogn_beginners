#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n == 1 || n == 2 || n == 12){
        cout<<"Winter";
    }else if (n == 3 || n == 4 || n == 5){
        cout<<"Spring";
    }else if (n == 6 || n == 7 || n == 8){
        cout<<"Summer";
    }else if (n == 9 || n == 10 || n == 11)
        cout<<"Autumn";
    else
        cout<<"Error";

    return 0;
}
