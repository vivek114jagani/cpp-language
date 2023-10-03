// Uses of the scope resolution Operator
// ---------------------------------------------------------------------------------------------------
// It is used to access the hidden variables or member functions of a program.
// It defines the member function outside of the class using the scope resolution.
// It is used to access the static variable and static function of a class.
// The scope resolution operator is used to override function in the Inheritance.

#include <iostream>
using namespace std;
// declare global variable
int num = 50;
int main()
{
    // declare local variable
    int num = 100;

    // print the value of the variables
    cout << " The value of the local variable num: " << num;

    // use scope resolution operator (::) to access the global variable
    cout << "\n The value of the global variable num: " << ::num;
    return 0;
}
