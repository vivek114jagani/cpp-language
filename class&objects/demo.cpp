#include <iostream>
using namespace std;

class demo
{
private:
    int id;
    string name;

public:
    int insert(int i, string n)
    {
        id = i;
        name = n;
    }
    // private:
    // int display(int d, char t)
    int display()
    {
        cout << id << "\n"
             << name << endl;
    }
    // int display(char d)
    // {
    //     cout << "dell well";
    // }
};

int main()
{
    demo d1;

    // d1.id = 1;
    // d1.name = "jay";
    // cout << d1.id << "\n" << d1.name << endl;

    d1.insert(1, "jay");
    d1.display();
}