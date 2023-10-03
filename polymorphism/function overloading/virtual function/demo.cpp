#include <iostream>
using namespace std;

class A
{
    public:
        virtual void display()  // virtual key_word is also diclared by base class
        {
            cout << "BASE CLASS is invoke" << endl;
        }
};

class B : public A
{
    public:
        void display()
        {
            cout << "DERIVED CLASS is invoke" << endl;
        }
};

int main()
{
    A *a;   // pointer of base class
    B b;    // object of derived class
    a = &b;
    a->display();   // a-> allows the function named display to access the value of pointer a.
}