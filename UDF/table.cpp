#include <iostream>
using namespace std;

int table(int a)
{
    int i;

    for (i = 1; i < 11; i++)
    {
        cout << a << " X " << i << " = " << a * i << endl;
        ;
    }
}
int main()
{
    int a;

    cout << "NEter the number you want multiplication table of : ";
    cin >> a;
    table(a);
}