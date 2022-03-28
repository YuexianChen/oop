#include <iostream>
using namespace std;

int main()
{
    //Q8
    cout << "The answer to the question of\n"
        << "Life, the Universe, and Everything is 42.\n";

    //Q9
    int the_number;
    cout << "Enter a whole number: ";
    cin >> the_number;

    //Q10 print fixed 3 decimal place for double variable.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    //Q11
    cout <<"Hello world\n";

    //Q12
    int a,b,sum;
    cout << "enter a number: ";
    cin >> a;
    cout << "enter another number: ";
    cin >> b;
    sum = a+b;
    cout << "Their sum is " << sum << endl;

    //Q13
    cout << "\n";
    cout << "\t";
    return 0;
}
