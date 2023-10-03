#include<iostream>
using namespace std;

int sum_array(int a[], int n)
{
    if (n <= 0)
        return 0;
    return sum_array(a, n - 1) + a[ n - 1];
}

int main()
{
    int a[10], n, i, sum = 0;

    cout << "Enter the size of array A : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sum = sum_array(a, n);
    cout << "sum of array A elements is : " << sum;
}