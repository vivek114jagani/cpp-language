// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "ENter the number : ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";   
        }
        cout << endl;
    }  
}