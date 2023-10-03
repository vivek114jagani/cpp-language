#include<iostream>
using namespace std;

class cal
{
    public:
        int div(int a, int b)
        {
            return a / b;
        }
};

int main()
{
    cal c;
    cout << "division of 2 number is : " << c.div(105, 5);
}