#include<iostream>
using namespace std;

class SDJ
{
    public:
        void col_name()
        {
            string name = "SDJIC";
            cout << "collage name :- " << name << endl;
        }
};

class student
{
    public:
        void st_name()
        {
            string sname = "vivek jagani";
            cout << "studen name :- " << sname << endl;
        }
};
class roll: public SDJ, public student
{
    public:
        void roll_no()
        {
            int roll_no = 383;
            cout << "roll no :- " << roll_no;
        }
};

int main()
{
    roll s;

    s.col_name();
    s.st_name();
    s.roll_no();
}