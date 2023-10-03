#include<iostream>
using namespace std;

class cal
{
    public:
        int mul(int a, int b)
        {
            return a * b;
        }

        float mul(double x, int y)
        {
            return x * y;
        }
};

int main()
{
    cal c;
    cout << c.mul(5, 9) << endl;
    cout << c.mul(0.5, 5);
}