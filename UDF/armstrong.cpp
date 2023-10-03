#include<iostream>
using namespace std;

int arm(int n)
{
    int a = 0, b, r, i;

    b = n;
    for (a = 0; n > 0; i++)
    {
        r = n % 10;
        a += r * r * r;
        n /= 10;
    }
    if (b == a)
    {
        cout << a << " is Armstrong";
    }
    else
    {
        cout << a << " is NOt Armstrong";
    }
}
int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;
    arm(n);
}