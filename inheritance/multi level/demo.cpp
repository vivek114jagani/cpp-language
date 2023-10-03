#include<iostream>
#include<string>
using namespace std;

class SDJ
{
    public:
        void coll_name()
        {
            string name = "SDJIC";
            cout << "collage name :- " << name << endl;
        }
};

class student: public SDJ
{
    public:
        void st_name()
        {
            string name = "vivek jagani";
            cout << "student name :- " << name << endl;
        }
};

class roll_no: public student
{
    public:
        void roll()
        {
            int roll_no = 383;
            cout << "roll_no :- " << roll_no << endl;
        }
};

int main()
{
    roll_no s1;
    
    s1.coll_name();
    s1.roll();
    s1.st_name();
}