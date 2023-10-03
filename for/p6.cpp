//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n;

    cout << "Enter the number : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (k = i; k <= n - 1; k++)
        {
            cout << "  ";
        }        
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }  
}