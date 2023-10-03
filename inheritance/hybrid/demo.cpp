#include<iostream>
using namespace std;

class A
{
    public:
        int a;
        public:
            void value_A()
            {
                cout << "Enter the value of A : ";
                cin >> a;
            }
};

class B: public A
{
    public:
        int b;
        public:
            void value_B()
            {
                cout << "Enter the value of B : ";
                cin >> b;
            }
};

class C 
{
    public:
        int c;
        public:
            void value_C()
            {
                cout << "Enter the value of C : ";
                cin >> c;
            }
};

class D: public B, public C
{
    public:
        void multiply()
        {
            value_A();
            value_B();
            value_C();

            cout << "multiplication of A, B and C is :- " << a * b * c;
        }
};

int main()
{
    D d;
    d.multiply();
}