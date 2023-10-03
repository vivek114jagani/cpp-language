#include <iostream>
using namespace std;

class Bank
{
public:
};

class Curent : public Bank
{
    // int choice = 0, balance = 200000, amount, accno;
    int balance = 200000, amount, accno;
    public:
        void withdraw()
        {
            cout << "Enter withdraw amount := ";
            cin >> amount;
            if (amount > balance)
            {
                cout << amount << " is very high balance in your account... please try again" << endl;
            }
            else
            {
                balance -= amount;
            }
        }

        void Deposite()
        {
            cout << "Enter the amount of Deposite := ";
            cin >> amount;
            balance += amount;
        }

        void show_balance()
        {
            cout << "This is a total balance in your Curent account : " << endl;
            cout << "========================================================" << endl;
            cout << "BALANCE" << endl;
            cout << "------------" << endl;
            cout << balance << endl;
        }

        void swap()
        {
            cout << "Welcome to your \"curent Account\". Please choose an option : " << endl;
            cout << "*************************************************" << endl;
            cout << "\t\t1==> withdraw" << endl;
            cout << "\t\t2==> Deposite" << endl;
            cout << "\t\t3==> show balance" << endl;
            cout << "\t\t4==> Swap" << endl;
            cout << "\t\t5==> Exit" << endl;
            cout << "*************************************************" << endl;
        }

        ~Curent()
        {
            cout << "Thank you for visit our ATM ";
        }
};

class Saving : public Bank
{
    int balance = 10000, amount, accno;
    public:
        void withdraw()
        {
            cout << "Enter withdraw amount := ";
            cin >> amount;
            if (amount > balance)
            {
                cout << amount << " is very high balance in your account... please try again" << endl;
            }
            else
            {
                balance -= amount;
            }
        }

        void Deposite()
        {
            cout << "Enter the amount of Deposite := ";
            cin >> amount;
            balance += amount;
        }

        void show_balance()
        {
            cout << "This is a total balance in your Curent account : " << endl;
            cout << "========================================================" << endl;
            cout << "BALANCE" << endl;
            cout << "------------" << endl;
            cout << balance << endl;
        }

        void swap()
        {
            cout << "Welcome to your \"saving Account\". Please choose an option : " << endl;
            cout << "*************************************************" << endl;
            cout << "\t\t1==> withdraw" << endl;
            cout << "\t\t2==> Deposite" << endl;
            cout << "\t\t3==> show balance" << endl;
            cout << "\t\t4==> Swap" << endl;
            cout << "\t\t5==> Exit" << endl;
            cout << "*************************************************" << endl;
        }
};
int main()
{
    Bank b;
    Curent cu;
    Saving s;
    int c, option = 0;
    int swap = 0;

    cout << "1==> curent Account" << endl;
    cout << "2==> Saving Account" << endl;
    cout << "Enter your choice : ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "Welcome to your \"curent Account\". Please choose an option : " << endl;
        swap = 1;
        break;
    case 2:
        cout << "Welcome to your \"saving Account\". Please choose an option : " << endl;
        swap = 2;
        break;
    default:
        cout << "Invalid option... pleas, try again." << endl;
        break;
    }

    cout << "***************************************************" << endl;
    cout << "\t\t1==> withdraw" << endl;
    cout << "\t\t2==> Deposite" << endl;
    cout << "\t\t3==> show balance" << endl;
    cout << "\t\t4==> Swap" << endl;
    cout << "\t\t5==> Exit" << endl;
    cout << "***************************************************" << endl;

    while (option != 5)
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Enter your choice : ";
        cin >> option;
        cout << "-----------------------------------------------" << endl;
        switch (option)
        {
        case 1:
            if (swap == 1)
            {
                cu.withdraw();
            }
            else if (swap == 2)
            {
                s.withdraw();
            }
            break;
        case 2:
            if (swap == 1)
            {
                cu.Deposite();
            }
            else if (swap == 2)
            {
                s.Deposite();
            }
            break;
        case 3:
            if (swap == 1)
            {
                cu.show_balance();
            }
            else if (swap == 2)
            {
                s.show_balance();
            }
            break;
        case 4:
            if (swap == 1)
            {
                swap = 2;
                s.swap();
            }
            else if (swap == 2)
            {
                swap = 1;
                cu.swap();
            }
            break;
        case 5:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}
