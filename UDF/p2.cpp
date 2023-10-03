//     1
//    12
//   123
//  1234
// 12345
#include <iostream>
using namespace std;

int p2(int n)
{
    int i, j, k;

    for (i = 1; i <= n; i++)
    {
        for (k = n - 1; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;
    p2(n);
}