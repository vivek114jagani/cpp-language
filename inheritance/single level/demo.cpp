#include<iostream>
using namespace std;

class account
{
    public:
        float salary = 45000;
};

class cash: public account
{
    public:
        float bonus = 5000;
};

int main()
{
    cash acc;

    cout << "SALARY = " << acc.salary <<endl;
    cout << "BONUS = " << acc.bonus <<endl;
    // 
    return 0;
}