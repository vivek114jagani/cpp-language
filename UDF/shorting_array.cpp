#include <iostream>
using namespace std;

void sort_array(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }            
        }        
    }
    cout << "SOrting array is : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[100], i, n;

    cout << "Enter the limite of ARRAY : ";
    cin >> n;

    cout << "Enter the elements of ARRAY : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
    sort_array(a, n);   
}