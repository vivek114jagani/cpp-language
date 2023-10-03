#include<iostream>
using namespace std;

class A
{
    int x = 5;
    public:
        virtual void display()
        {
            cout << "value of x is : " << x << endl;
        }
};

class B: public A
{
    int y = 10;
    public:
        void display()
        {
            cout << "value of y is : " << y << endl;
        }
};

int main()
{
    A *a;
    B b;
    a = &b;
    a->display();
}