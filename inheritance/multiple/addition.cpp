#include<iostream>
using namespace std;

class A
{
    // protected:
    public:
        // public:
        int a;
            void a_num(int n)
            {
                a = n;
            }
};

class B
{
    // protected:
    public:
        int b;
        // public:
            void b_num(int n)
            {
                b = n;
            }
};

class C: public A, public B
{
    public:
        void display()
        {
            cout << "Value of A is = " << a << endl;
            cout << "Value of B is = " << b << endl;
            cout << "Addition of A and B is = " << a + b;
        }
};

int main()
{
    C d;
    d.a_num(2);
    d.b_num(2);
    d.display();
}