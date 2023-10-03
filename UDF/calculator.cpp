#include <iostream>
using namespace std;

int clac(int a, int b, int o)
{
    cout << "Enter the Arithmatic Operator : ";
    cin >> o;
    switch (o)
    {
    case 1:
        cout << a << " + " << b << " = " << a + b;
        break;
    case 2:
        cout << a << " - " << b << " = " << a - b;
        break;
    case 3:
        cout << a << " X " << b << " = " << a * b;
        break;
    case 4:
        cout << a << " / " << b << " = " << a / b;
        break;

    default:
        cout << "Error: This is not Arithmatic Operator... Please try again.";
        break;
    }
}
int main()
{
    int a, b, o;

    cout << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    cout << "=====================================" << endl;
    cout << "1 for addition" << endl;
    cout << "2 for subtraction" << endl;
    cout << "3 for multiplication" << endl;
    cout << "4 for division" << endl;
    cout << "=====================================" << endl;
    clac(a, b, o);
}