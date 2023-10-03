#include<iostream>
using namespace std;

class A
{
    int a = 5, b = 3;
    public:
        int mul()
        {
            int c = a * b;
            return c;
        }
};

class B: public A
{
    public:
        void display()
        {
            int result = mul();
            cout << "Multiplication of A and B is : " << result << endl;
        }
};

int main()
{
    B n;

    n.display();
}