//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;

    cout << "Enter the number : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--)
        {
            cout << " ";
        }
        if (i % 2 != 0)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
}