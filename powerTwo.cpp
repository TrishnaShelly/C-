#include <iostream>
using namespace std;

bool isPowerof2(int n){
    return (n & n-1);
}

int main()
{
    cout<<isPowerof2(16);
    return 0;
}