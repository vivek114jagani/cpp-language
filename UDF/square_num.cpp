#include <iostream>
using namespace std;

int squ_num(int n)
{
    int i;

    cout << "Suqare number is : \n";
    for (i = 1; i < n; i++)
    {
        cout << i * i << endl;
    }
}
int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;
    squ_num(n);
}