#include <iostream>
using namespace std;

void tripler(int& n)
{
    n=3*n;
}

int main()
{
    int a[3]={4,5,6}, number = 2;
    // acceptable function calls
    tripler(number);
    tripler(a[number]);
    tripler(a[2]);
    cout << a[0] << endl;
    return 0;
}