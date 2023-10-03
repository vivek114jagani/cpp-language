#include<iostream>
using namespace std;

class shape
{
    public:
        int n, m;
        void data(int n, int m)
        {
            this->n = n;
            this->m = m;
        }
};

class rectangle: public shape
{
    public:
        int rect()
        {
            int result = n * m;
            return result;
        }
};

class triangle: public shape
{
    public:
        int tri()
        {
            float result = 0.5 * n * m;
            return result;  
        }
};

int main()
{
    rectangle r;
    triangle t;

    int length, breadth, base, heidht;

    cout << "Enter the value of length and breadth of rectangle : \n";
    cin >> length >> breadth;
    
    r.data(length, breadth);
    cout << "Area of rectangle is :- " << r.rect() << endl;

    cout << "ENter the value of base and heidth of triangle : \n";
    cin >> base >> heidht;

    t.data(base, heidht);
    cout << "Area of triangle is :- " << t.tri() << endl;
}