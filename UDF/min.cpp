#include<iostream>
using namespace std;

int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            cout << "A is min";
        }
        else
        {
            cout << "C is min";
        }
    }
    else
    {
        if (b < c)
        {
            cout << "B is min";
        }
        else
        {
            cout << "C is min";
        }
    }
}
int main()
{
    int a, b, c;

    cout << "ENter the value of A : ";
    cin >> a;

    cout << "ENter the value of B : ";
    cin >> b;
    
    cout << "ENter the value of C : ";
    cin >> c;
    min(a, b, c);
}