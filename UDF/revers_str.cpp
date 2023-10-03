#include<iostream>
using namespace std;

int rev_str(char str[])
{
    int n = 0, i;
    while (str[n] != '\0') n++;

    cout << "Revers strnig is : ";
    for (i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    
}
int main()
{
    char str[20];
    int n, i;

    cout << "Eter the string : ";
    cin >> str;
    rev_str(str);
}