#include<iostream>
using namespace std;

class volume
{
    public:
        float lit, mll;
};

int main()
{
    volume vol[2];
    int i, sum_lit = 0, sum_mll = 0;

    for (i = 0; i < 2; i++)
    {
        cout << "\nEnter the value of volume " << i + 1 << " :-"<< endl;
        cout << "------------------------------------------------\n";

        cout << "Litter = ";
        cin >> vol[i].lit;

        cout << "Millilitter = ";
        cin >> vol[i].mll;
    }
    
    for (i = 0; i < 2; i++)
    {
        sum_lit += vol[i].lit;
        sum_mll += vol[i].mll;
    }
    
    while (sum_mll >= 1000)
    {
        sum_mll -= 1000;
        sum_lit += 1;
    }
    
    cout << "\n\n--------------------------------\n";
    cout << "Liter = " << sum_lit << "\n" << "Milliliter = " << sum_mll;
}