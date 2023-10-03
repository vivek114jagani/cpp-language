#include<iostream>
using namespace std;

class cal
{
    public:
        int sub(int a, int b)
        {
            return a - b;
        }

        int sub(int a, int b, int c)
        {
            return a - b - c;
        }
};

int main()
{
    cal c;
    cout << "subtraction of 2 number is : " << c.sub(20, 10) << endl;
    cout << "subtraction of 3 number is : " << c.sub(30, 20, 19); 
}