// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
#include <iostream>
using namespace std;
int pattern1(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            cout << j  << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;
    pattern1(n);
}