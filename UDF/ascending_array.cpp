#include<iostream>
using namespace std;

int ascending(int a[], int n)
{
    int i, j, b;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    
    cout << "Array A inn ascending order : " <<endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[10], n, i;

    cout << "Enter the Array A size : ";
    cin >> n;

    cout << "Enter the Array A elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    ascending(a, n);
}