#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enrter the vlue of A : ";
    cin >> a;

    cout << "Enrter the vlue of B : ";
    cin >> b;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~ a = " << ~ a << endl;
}