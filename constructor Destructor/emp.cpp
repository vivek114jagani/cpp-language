#include<iostream>
using namespace std;

class employee
{
    public:
        int id;
        string name;
        float salary;

        employee(int i, string n, float s)
        {
            id = i;
            name = n;
            salary = s;
        }

        void display()
        {
            cout << "ID : " << id << "\nname : " << name << "\nsalary : " << salary << endl << endl;
        }
};

int main()
{
    employee e1 (111, "vievk", 56000);
    employee e2 (112, "jay", 55000);

    e1.display();
    e2.display();
}