#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Q15
    /*C++ expression
    int x=1, y=1, z=1;
    int a=3*x, b=3*x + y, c=(x+y)/7,  d=(3*x+y)/(z+2);*/

    //Q16
    char a, b, c;
    a = 'b';
    b='c';
    c=a;
    cout << a << b << c << 'c'<< endl;
    // result will be 'bcbc'.

    //Q17
    int number = (1/3)*3;
    cout <<"(1/3*3 is equal to " << number << endl;
    // the answer should be 0, because 1/3 is 0 when number is an integer.

    //Q18
    int number1, number2;
    cout << "Enter two integers: \n";
    cin >> number1 >> number2;
    cout << "The whole-number is " << number1/number2 << " , the remainder is "
         << number1 % number2 << endl;

    //Q19
    // when we expect a double result of an operation, at least one of the
    // elements should be double type.

    //Q20
    string month = "03", day="04", year = "06";
    string date = month + day + year;
    cout << date << endl;

    return 0;
}