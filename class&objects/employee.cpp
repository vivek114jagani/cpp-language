#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    float salary;
    // int insert(int i, string n, float s)
    // {
    //     id = i;
    //     name = n;
    //     salary = s;
    // }
    // int display()
    // {
    //     cout << id << " " << name << " " << salary << endl;
    // }
};

int main()
{
    employee emp[5];
    int i;

    // e1.insert(101,"Dhruv",56000);
    // e2.insert(102,"vivek",50000);
    // e1.display();
    // e2.display();

    cout << "ENtere the data of all employees :- \n";
    cout << "--------------------------------------\n";
    for (i = 0; i < 2; i++)
    {
        cout << "\nENter the Data of Employee " << i + 1 << " :- \n";
        cout << "-------------------------------------------------\n";

        cout << "ID :- ";
        cin >> emp[i].id;

        cout << "NAME :- ";
        cin >> emp[i].name;

        cout << "SALARY :- ";
        cin >> emp[i].salary;
    }

    cout << "\n\n------------------------------------------------------------------\n";
    cout << "Display the data of employee whose salary is less than 15000\n";
    cout << "------------------------------------------------------------------\n";
    for (i = 0; i < 2; i++)
    {
        if (emp[i].salary < 15000)
        {
            cout << "ID = " << emp[i].id << "\n" << "NAME = " << emp[i].name << "\n" << "SALARY = " << emp[i].salary << endl;
        } 
    }
}