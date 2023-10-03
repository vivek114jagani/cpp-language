#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int i, a = 0, b = 1, c;
    for (i = 0; i < n; i++)
    {
        cout << a << endl;
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;

    cout << "Enter the number :";
    cin >> n;
    fibonacci(n);
}