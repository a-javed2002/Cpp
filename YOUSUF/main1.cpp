#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Parent Juice class
class Juice
{
protected:
    string ingredients;
    int price;
    string taste;

public:
    Juice(string i = "", int p = 0, string t = "") : ingredients(i), price(p), taste(t) {}
    virtual ~Juice() {}
    virtual void printInfo()
    {
        cout << "Ingredients: " << ingredients << endl;
        cout << "Price: " << price << endl;
        cout << "Taste: " << taste << endl;
    }

    
};

// FruitJuice class
class FruitJuice : public Juice
{
protected:
    string season;

public:
    FruitJuice(string i = "", int p = 0, string t = "", string s = "") : Juice(i, p, t), season(s) {}
    virtual ~FruitJuice() {}
    virtual void printInfo()
    {
        Juice::printInfo();
        cout << "Season: " << season << endl;
    }
};

// VegetableJuice class
class VegetableJuice : public Juice
{
protected:
    string origin;

public:
    VegetableJuice(string i = "", int p = 0, string t = "", string o = "") : Juice(i, p, t), origin(o) {}
    virtual ~VegetableJuice() {}
    virtual void printInfo()
    {
        Juice::printInfo();
        cout << "Origin: " << origin << endl;
    }
};

// MixedJuice class
class MixedJuice : public Juice
{
public:
    MixedJuice(string i = "", int p = 0, string t = "") : Juice(i, p, t) {}
    virtual ~MixedJuice() {}
    virtual void printInfo()
    {
        Juice::printInfo();
    }
};

// Sub-classes for FruitJuice
class CitrusJuice : public FruitJuice
{
public:
    CitrusJuice(string i = "", int p = 0, string t = "", string s = "") : FruitJuice(i, p, t, s) {}
    virtual ~CitrusJuice() {}
};

class BerryJuice : public FruitJuice
{
public:
    BerryJuice(string i = "", int p = 0, string t = "", string s = "") : FruitJuice(i, p, t, s) {}
    virtual ~BerryJuice() {}
};

class TropicalJuice : public FruitJuice
{
public:
    TropicalJuice(string i = "", int p = 0, string t = "", string s = "") : FruitJuice(i, p, t, s) {}
    virtual ~TropicalJuice() {}
};

// Sub-classes for VegetableJuice
class LeafyGreenJuice : public VegetableJuice
{
public:
    LeafyGreenJuice(string i = "", int p = 0, string t = "", string o = "") : VegetableJuice(i, p, t, o) {}
    virtual ~LeafyGreenJuice() {}
};

class RootVegetableJuice : public VegetableJuice
{
public:
    RootVegetableJuice(string i = "", int p = 0, string t = "", string o = "") : VegetableJuice(i, p, t, o) {}
    virtual ~RootVegetableJuice() {}
};

class MixedVegetableJuice : public VegetableJuice
{
public:
    MixedVegetableJuice(string i = "", int p = 0, string t = "", string o = "") : VegetableJuice(i, p, t, o) {}
    virtual ~MixedVegetableJuice() {}
};

// Sub-classes for MixedJuice
class FruitAndVeggieJuice : public MixedJuice
{
public:
    FruitAndVeggieJuice(string i = "", int p = 0, string t = "") : MixedJuice(i, p, t) {}
    virtual ~FruitAndVeggieJuice() {}
};

class SmoothieJuice : public MixedJuice
{
public:
    SmoothieJuice(string i = "", int p = 0, string t = "") : MixedJuice(i, p, t) {}
    virtual ~SmoothieJuice() {}
};

// Sale class
class Sale
{
private:
    static int numSales;
    int saleID;
    string customerName;
    int totalBill;
    int numFruitJuice;
    int numVegetableJuice;
    int numMixedJuice;

public:
    Sale(string name = "", int bill = 0, int f = 0, int v = 0, int m = 0)
        : customerName(name), totalBill(bill), numFruitJuice(f), numVegetableJuice(v), numMixedJuice(m)
    {
        numSales++;
        saleID = numSales;
    }
    virtual ~Sale() {}
    // Getters
    int getSaleID() const { return saleID; }
    string getCustomerName() const { return customerName; }
    int getTotalBill() const { return totalBill; }
    int getNumFruitJuice() const { return numFruitJuice; }
    int getNumVegetableJuice() const { return numVegetableJuice; }
    int getNumMixedJuice() const { return numMixedJuice; }
    // Setters
    void setCustomerName(string name) { customerName = name; }
    void setTotalBill(int bill) { totalBill = bill; }
    void setNumFruitJuice(int f) { numFruitJuice = f; }
    void setNumVegetableJuice(int v) { numVegetableJuice = v; }
    void setNumMixedJuice(int m) { numMixedJuice = m; }
    // Other member functions
    void printInfo()
    {
        cout << "Sale ID: " << saleID << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Total Bill: " << totalBill << endl;
        cout << "Number of Fruit Juice: " << numFruitJuice << endl;
        cout << "Number of Vegetable Juice: " << numVegetableJuice << endl;
        cout << "Number of Mixed Juice: " << numMixedJuice << endl;
    }
};

int Sale::numSales = 0;

int main()
{
    // Create a menu of available juices
    map<string, Juice *> juiceMenu;
    juiceMenu["Orange Juice"] = new CitrusJuice("Orange", 50, "Sour", "Winter");
    juiceMenu["Apple Juice"] = new FruitJuice("Apple", 40, "Sweet", "Autumn");
    juiceMenu["Pineapple Juice"] = new TropicalJuice("Pineapple", 60, "Tangy", "Summer");
    juiceMenu["Carrot Juice"] = new RootVegetableJuice("Carrot", 30, "Earthy", "Local");
    juiceMenu["Tomato Juice"] = new MixedVegetableJuice("Tomato", 35, "Savory", "Local");
    juiceMenu["Spinach Juice"] = new LeafyGreenJuice("Spinach", 45, "Grassy", "Local");
    juiceMenu["Green Juice"] = new FruitAndVeggieJuice("Green", 55, "Refreshing");
    juiceMenu["Strawberry Banana Smoothie"] = new SmoothieJuice("Strawberry Banana", 70, "Creamy");

    string customerName;
    // Print the menu
    cout << "Welcome to the Juice Shop!" << endl;
    cout << endl << "Please enter your name: ";
    getline(cin, customerName);
    cout << "Here is our menu: " << endl;
    for (auto &pair : juiceMenu)
    {
        cout << pair.first << " - $" <<  endl;
        // cout << pair.first << " - $" << pair.second->printInfo() << endl;
    }

    // Take the order from the customer
    string juiceName;
    int quantity;
    
    cout << "What would you like to order? ";
    getline(cin, juiceName);
    cout << "How many glasses would you like? ";
    cin >> quantity;

    // Process the order
    if (juiceMenu.find(juiceName) != juiceMenu.end())
    {
        Juice *selectedJuice = juiceMenu[juiceName];
        int totalBill = selectedJuice->getTotalBill() * quantity;

        // Record the sale
        Sale currentSale(customerName, totalBill, dynamic_cast<FruitJuice *>(selectedJuice) != nullptr,
                         dynamic_cast<VegetableJuice *>(selectedJuice) != nullptr,
                         dynamic_cast<MixedJuice *>(selectedJuice) != nullptr);

        // Print the order details and the total bill
        cout << endl << "Order details:" << endl;
        cout << "Customer name: " << currentSale.getCustomerName() << endl;
        cout << "Juice name: " << juiceName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total bill: $" << currentSale.getTotalBill() << endl;
    }
    else
    {
        cout << "Sorry, we don't have " << juiceName << " in our menu." << endl;
    }

    // Free the memory used by the juices in the menu
    for (auto &pair : juiceMenu)
    {
        delete pair.second;
    }

    return 0;
}