// When the compiler is unable to decide which function is to be invoked among the overloaded function, this situation is known as function overloading.

#include<iostream>
using namespace std;

void fun(int i)
{
    cout << "The value of i is : " << i << endl;
}

void fun1(float j)
{
    cout << "The value of j is : " << j << endl;
}

int main()
{
    fun(12);
    fun1(15.65);
}