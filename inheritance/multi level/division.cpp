#include<iostream>
using namespace std;

class num
{
    public:
        float a, b;
        void Numbers(float n1, float n2)
        {
            a = n1;
            b = n2;
        }
};

class division: public num
{
    public:
        float div;
        void divide()
        {
            div = a / b;
        }
};

class display: public division
{
    public:
        void display_result()
        {
            cout << "Division of A and B is = " << div << endl;
        }
};

int main()
{
    float a, b;
    
    cout << "Enter the nmber of A = ";
    cin >> a;
    cout << "Enter the nmber of B = ";
    cin >> b;

    display d;
    d.Numbers(a, b);
    d.divide();
    d.display_result();
}