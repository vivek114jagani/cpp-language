//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n;

    cout << "Enter the number : ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= i - 1; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}