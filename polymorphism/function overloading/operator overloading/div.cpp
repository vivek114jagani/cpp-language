#include<iostream>
using namespace std;

class A
{
    float x;
    public:
        A(float i)
        {
            x = i;
        }

        void operator/(A a)
        {
            float m = x / a.x;
            cout << "division of two number is : " << m << endl;
        }
};

int main()
{
    A a1(75);
    A a2(2);
    a1 / a2;
}