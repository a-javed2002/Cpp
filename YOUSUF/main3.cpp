#include <iostream>

using namespace std;

class Product
{
protected:
    string name;
    double price;

public:
    Product(string n, double p) : name(n), price(p) {}
    virtual double getDiscountedPrice()
    {
        return price;
    }
    virtual void printDetails()
    {
        cout << "Name: " << name << ", Price: " << price << endl;
    }

    Product operator&(Product &other)
    {
        // Calculate average price of two products
        double avg_price = (price + other.price) / 2;

        // Concatenate names of two products
        string new_name = name + " & " + other.name;

        // Create a new Product object with concatenated name and average price
        Product new_product(new_name, avg_price);

        return new_product;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book(string n, double p, string a) : Product(n, p), author(a) {}
    void printDetails()
    {
        cout << "Name: " << name << ", Author: " << author << ", Price: " << price << endl;
    }
};

class Electronic : public Product
{
private:
    string brand;

public:
    Electronic(string n, double p, string b) : Product(n, p), brand(b) {}
    string getBrand()
    {
        return brand;
    }
};

class Clothing : public Product
{
private:
    string size;

public:
    Clothing(string n, double p, string s) : Product(n, p), size(s) {}
    double getDiscountedPrice()
    {
        return price * 0.8; // 20% discount for clothing items
    }
};

class Customer
{
protected:
    string name;
    double balance;

public:
    Customer(string n, double b) : name(n), balance(b) {}
    virtual void buyProduct(Product *p)
    {
        double discountedPrice = p->getDiscountedPrice();
        if (balance >= discountedPrice)
        {
            balance -= discountedPrice;
            cout << name << " has bought the product." << endl;
        }
        else
        {
            cout << name << " cannot buy the product." << endl;
        }
    }
};

class VIPCustomer : public Customer
{
public:
    VIPCustomer(string n, double b) : Customer(n, b) {}
    void buyProduct(Product *p)
    {
        double discountedPrice = p->getDiscountedPrice() * 0.9; // 10% additional discount for VIP customers
        if (balance >= discountedPrice)
        {
            balance -= discountedPrice;
            cout << name << " (VIP) has bought the product." << endl;
        }
        else
        {
            cout << name << " (VIP) cannot buy the product." << endl;
        }
    }
};

int main()
{
    Book *book1 = new Book("The Great Gatsby", 10.99, "F. Scott Fitzgerald");
    Electronic *electronic1 = new Electronic("iPhone X", 999.99, "Apple");
    Clothing *clothing1 = new Clothing("T-Shirt", 19.99, "M");
    Customer *customer1 = new Customer("22k-5079", 50);
    VIPCustomer *customer2 = new VIPCustomer("22k-5071", 100);

    book1->printDetails();
    electronic1->printDetails();
    clothing1->printDetails();

    customer1->buyProduct(book1);
    customer1->buyProduct(electronic1);
    customer1->buyProduct(clothing1);

    customer2->buyProduct(book1);
    customer2->buyProduct(electronic1);
    customer2->buyProduct(clothing1);

    delete book1;
    delete electronic1;
    delete clothing1;
    delete customer1;
    delete customer2;

    Product p1("Book", 10);
    Product p2("Pen", 2);

    Product p3 = p1 & p2;
    p3.printDetails();

    return 0;
}
