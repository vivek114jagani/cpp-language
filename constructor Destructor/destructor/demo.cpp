#include<iostream>
using namespace std;

class employee
{
    public:
        employee()
        {
            cout << "this is demo of destructor in c++" << endl;
        }

        ~employee()
        {
            cout << "thank youvery much visit to this file" << endl;
        }
};

int main()
{
    employee e1;
    employee e2;
}