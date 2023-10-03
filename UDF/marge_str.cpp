#include<iostream>
using namespace std;

int marge(char a[], char b[], char c[])
{
    int i, j;

    for (i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; b[j] != '\0'; j++)
    {
        c[i + j] = b[j];
    }
    c[i + j] = '\0';  

    cout << "The Marge string is : " << c << endl;  
}

int main()
{
    char a[10], b[10], c[20];

    cout << "ENter the string A : ";
    cin >> a;

    cout << "ENter the string B : ";
    cin >> b;
    marge(a, b, c);
}