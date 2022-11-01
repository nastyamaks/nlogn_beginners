#include <iostream>

using namespace std;

int main()
{
    int a1 , a2 , a3 , num = 0;
    
    cin>>a1>>a2>>a3;
    
    if (a1 == a2 && a1 == a3){
        num = 3;
    }
    
    else if (a1 == a2 || a1 == a3 || a2 == a3){
        num = 2;
    }
    
    else
        num = 0;
    
    cout<<num;
    
    return 0;
}