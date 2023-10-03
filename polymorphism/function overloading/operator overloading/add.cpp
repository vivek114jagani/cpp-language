#include<iostream>
using namespace std;

class A
{
    int x;
    public:
        A(int i)
        {
            x = i;
        }

        void operator+(A a)
        {
            int m = x + a.x;
            cout << "Addition of two number is : " << m << endl;
        }
};

int main()
{
    A a1(5);
    A a2(5);
    a1 + a2;
}