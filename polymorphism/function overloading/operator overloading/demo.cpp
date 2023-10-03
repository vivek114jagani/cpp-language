// We can use operator overloading to perform operations between two or more objects.
// ========================================================================================
// Operator that cannot be overloaded are as follows:
// ========================================================================================
// Scope operator (::)
// Sizeof
// member selector(.)
// member pointer selector(*)
// ternary operator(?:)
// ========================================================================================
// Rules for Operator Overloading
// ========================================================================================
// 1==> Existing operators can only be overloaded, but the new operators cannot be overloaded.

// 2==> The overloaded operator contains atleast one operand of the user-defined data type.

// 3==> We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.

// 4==> When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.

// 5==> When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments.

#include<iostream>
using namespace std;

class test
{
    int num =10;
    public:
        void operator ++(int) // int is only work from to the perameter for the after inctriment of the variable.
        {
            num += 1;
        }

        void print()
        {
            cout << "sum of num is : " << num << endl;
        }
};

int main()
{
    test t;
    t++;
    t.print();
}