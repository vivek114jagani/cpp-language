#include <iostream>
using namespace std;

class Vehicle
{
protected:
    char rn[20], ftype[10];

public:
    virtual void getdata()
    {
        cout << "Enter Registration Number :- ";
        cin >> rn;
        cout << "Enter Fuel Type :- ";
        cin >> ftype;
    }
    virtual void display()
    {
        cout << "\n\nRegistration Number :- " << rn << endl;
        cout << "Fuel Type :- " << ftype << endl;
    }
};
class Two_wheeler : public Vehicle
{
protected:
    float distance, mileage;

public:
    void getdata()
    {
        cout << "Enter Distance Of Your Vehicle Travelled(km) :- ";
        cin >> distance;
        cout << "Enter Mileage Of Your Vehicle(km/l) :- ";
        cin >> mileage;
    }
    void display()
    {
        cout << "Distance Travelled :- " << distance << endl;
        cout << "Mileage :- " << mileage << endl;
        cout << "Fuel Used :- " << distance * mileage << endl;
    }
};
int main()
{
    Vehicle v;
    Two_wheeler t;
    Vehicle *v1 = &v, *t1 = &t;
    v1->getdata();
    t1->getdata();
    v1->display();
    t1->display();
}