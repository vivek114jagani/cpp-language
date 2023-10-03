#include <iostream>
#include <string>
using namespace std;

class Media
{
    protected:
        string title;
        double price;

    public:
        Media(const string &_title, double _price) : title(_title), price(_price) {}

        virtual void display()
        {
            cout << "Title: " << title << endl;
            cout << "Price: $" << price << endl;
        }
};

class Tape : public Media
{
    private:
        int playTime;

    public:
        Tape(const string &_title, double _price, int _playTime) : Media(_title, _price), playTime(_playTime) {}

        void display() override
        {
            Media::display();
            cout << "Play Time: " << playTime << " minutes" << endl;
        }
};

class Book : public Media
{
    private:
        int pageCount;

    public:
        Book(const string &_title, double _price, int _pageCount) : Media(_title, _price), pageCount(_pageCount) {}

        void display() override
        {
            Media::display();
            cout << "Page Count: " << pageCount << " pages" << endl;
        }
};

int main()
{
    Tape tape("Sample Tape", 9.99, 120);
    Book book("Sample Book", 19.99, 300);

    cout << "Tape Details:" << endl;
    tape.display();
    cout << "\nBook Details:" << endl;
    book.display();
}
