#include <iostream>
using namespace std;

class Bank
{
    int c;
    public:
        int choise()
        {
            cout << "1==> curent Account" << endl;
            cout << "2==> Saving Account" << endl;
            cout << "Enter your choise : " << endl;
            cin >> c;
            return c;
        }
};

class Curent
{
    public:
        void ATM()
        {
            int choice = 0, balance = 200000, amount, accno;
            // string name;
            
            while (choice != 4)
            {           
                cout << "--------------------------------------------------" << endl;
                cout << "Enter your choie : " << endl;
                cin >> choice;
                cout << "--------------------------------------------------" << endl;
                switch (choice)
                {
                case 1:
                    // cout << "How much rupees do you want to withdraw?" << endl;
                    cout << "Enter withdraw amount : " << endl;
                    cin >> amount;
                    if (amount > balance)
                    {
                        cout << amount << " is very high balanse in your account... please try again" << endl;
                    }
                    else
                    {
                        balance -= amount;
                    }
                    break;
                case 2:
                    cout << "Enter the amount of Deposite : " << endl;
                    cin >> amount;

                    balance += amount;
                    break;
                case 3:
                    cout << "This is a total balance in your Curent account : " << endl;
                    cout << "========================================================" << endl;
                    cout << "BALANCE" << endl;
                    cout << "------------" << endl;
                    cout << balance << endl;
                    break;
                case 4:
                    cout << "Exit" << endl;
                    break;
                default:
                    cout << "Invalid choice" << endl;
                    break;
                }
            }
        }
        ~Curent()
        {
            cout << "Thank you for visit our ATM ";
        }
};

class Saving
{
    public:
        void ATM()
        {            
            int choice = 0, balance = 10000, amount, accno;
            // string name;
            
            while (choice != 4)
            {           
                cout << "--------------------------------------------------" << endl;
                cout << "Enter yoyr choie : " << endl;
                cin >> choice;
                cout << "--------------------------------------------------" << endl;
                switch (choice)
                {
                case 1:
                    // cout << "How much rupees do you want to withdraw?" << endl;
                    cout << "Enter withdraw amount : " << endl;
                    cin >> amount;
                    if (amount > balance)
                    {
                        cout << amount << " is very high balanse in your account... please try again" << endl;
                    }
                    else
                    {
                        balance -= amount;
                    }
                    break;
                case 2:
                    cout << "Enter the amount of Deposite : " << endl;
                    cin >> amount;

                    balance += amount;
                    break;
                case 3:
                    cout << "This is a total balance in your Saving account : " << endl;
                    cout << "========================================================" << endl;
                    cout << "BALANCE" << endl;
                    cout << "------------" << endl;
                    cout << balance << endl;
                    break;
                case 4:
                    cout << "Exit" << endl;
                    break;
                default:
                    cout << "Invalid choice" << endl;
                    break;
                }
            }
        }
};

int main()
{
    Bank b;
    Curent cu;
    Saving s;
    int choise = b.choise();
    cout << "Welcome to your Account. Please choose an option : " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "\t\t1==> withdraw" << endl;
    cout << "\t\t2==> Deposite" << endl;
    cout << "\t\t3==> show balance" << endl;
    cout << "\t\t4==> Swap" << endl;
    cout << "\t\t5==> Exite" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    switch (choise)
    {
    case 1:
        cu.ATM();
        break;
    
    case 2:
        s.ATM();
        break;
    
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}