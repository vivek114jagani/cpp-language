#include<iostream>
using namespace std;

class cal
{
    public:
        int addition(int a, int b)
        {
            return a + b;
        }

        int addition(int a, int b, int c)
        {
            return a + b + c;
        }
};

int main()
{
    cal c;
    cout << "addition of 2 number is : " << c.addition(10, 20) << endl;
    cout << "addition of 3 number is : " << c.addition(10, 20, 30); 
}