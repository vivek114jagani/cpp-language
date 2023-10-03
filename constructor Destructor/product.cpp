#include <iostream>
#include <string>
using namespace std;

class Product 
{
    private:
        int Pr_no;
        string Pr_name;
        int Quantity;
        double PricePerUnit;

    public:
        // Constructor for insertion of product information
        Product(int prNo, const string& prName, int quantity, double price) 
        {
            Pr_no = prNo;
            Pr_name = prName;
            Quantity = quantity;
            PricePerUnit = price;
        }

        // Search product information by product name
        bool search(const string& productName) const 
        {
            return Pr_name == productName;
        }

        // Display product information
        void display() const 
        {
            cout << "Product Number: " << Pr_no << endl;
            cout << "Product Name: " << Pr_name << endl;
            cout << "Quantity: " << Quantity << endl;
            cout << "Price per Unit: $" << PricePerUnit << endl;
        }
};

int main() 
{
    // Create an array of products (you can use a dynamic data structure for a real application)
    const int maxProducts = 5;
    Product products[maxProducts] = {
        Product(1, "Item1", 10, 25.99),
        Product(2, "Item2", 5, 12.49),
        Product(3, "Item3", 20, 9.99),
        Product(4, "Item4", 15, 14.99),
        Product(5, "Item5", 8, 19.99)
    };

    // Prompt the user to enter a product name for searching
    string searchProductName;
    cout << "Enter the product name to search: ";
    cin >> searchProductName;

    // Search for the product and display its information
    bool found = false;
    for (int i = 0; i < maxProducts; ++i) 
    {
        if (products[i].search(searchProductName)) 
        {
            products[i].display();
            found = true;
            break;
        }
    }

    if (!found) 
    {
        cout << "Product not found." << endl;
    }
}
