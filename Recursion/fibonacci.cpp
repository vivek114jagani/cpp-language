#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0) return 0;
    
    else if (n == 1)    return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    cout << "Enter the number : ";
    cin >> n;

    cout << "Fibonacci series : \n";
    // cout << fibonacci(n) << endl;
    for (i = 0; i < n; i++)
    {
        cout << fibonacci(i) << endl;
    }
}