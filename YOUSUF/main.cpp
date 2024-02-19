#include <iostream>
#include <vector>
using namespace std;

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
    int getSaleID() { return saleID; }
    string getCustomerName() { return customerName; }
    int getTotalBill() { return totalBill; }
    int getNumFruitJuice() { return numFruitJuice; }
    int getNumVegetableJuice() { return numVegetableJuice; }
    int getNumMixedJuice() { return numMixedJuice; }
    // Setters
    void setCustomerName(string name) { customerName = name; }
    void setTotalBill(int bill) { totalBill = bill; }
    void setNumFruitJuice(int f) { numFruitJuice += f; }
    void setNumVegetableJuice(int v) { numVegetableJuice += v; }
    void setNumMixedJuice(int m) { numMixedJuice += m; }

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

Sale operator+(Sale &s1, Sale &s2)
{
    if (s1.getCustomerName() != s2.getCustomerName())
    {
        throw std::invalid_argument("Cannot add sales for different customers");
    }
    Sale result(s1.getCustomerName());
    // result.totalJuices(s1.totalJuices() + s2.totalJuices());
    result.setTotalBill(s1.getTotalBill() + s2.getTotalBill());
    return result;
}

int Sale::numSales = 0;

int main()
{
    vector<Juice *> juiceSelected;

    string customerName;
    int opt;
    bool temp = true;

    while (true)
    {
        cout << "to Exit Program Press 0,otherwise press 1" << endl;
        cin >> opt;
        if (opt == 0)
        {
            return 0;
        }

        cout << "Welcome to the Juice Shop!" << endl;
        cout << endl
             << "Please enter your name: ";
        getline(cin, customerName);
        Sale ct1(customerName);
        cout << "Here is our menu: " << endl;

        while (temp)
        {
            cout << "Here Is Our Menu" << endl;
            cout << "0. CheckOut" << endl;
            cout << "1. Fruit Juice" << endl;
            cout << "2. Vegetable Juice" << endl;
            cout << "3. Mixed Juice" << endl;
            cin >> opt;
            switch (opt)
            {
            case 0:
                cout << "Check Out" << endl;
                temp = false;
                break;
            case 1:
                cout << "Fruit Juice Menu" << endl;
                cout << "0. Back" << endl;
                cout << "1. Citrus Juice" << endl;
                cout << "2. Fruit Juice" << endl;
                cout << "3. Tropical Juice" << endl;
                cin >> opt;
                switch (opt)
                {
                case 0:
                    cout << "Going Back....!!!" << endl;
                    break;
                case 1:
                    juiceSelected.push_back(new CitrusJuice("Orange", 50, "Sour", "Winter"));
                    ct1.setNumFruitJuice(1);
                    break;
                case 2:
                    juiceSelected.push_back(new FruitJuice("Apple", 40, "Sweet", "Autumn"));
                    ct1.setNumFruitJuice(1);
                    break;
                case 3:
                    juiceSelected.push_back(new TropicalJuice("Pineapple", 60, "Tangy", "Summer"));
                    ct1.setNumFruitJuice(1);
                    break;
                default:
                    cout << "Invalid Option Choosen" << endl;
                    break;
                }
                break;
            case 2:
                cout << "Vegetable Juice Menu" << endl;
                cout << "0. Back" << endl;
                cout << "1. RootVegetable Juice" << endl;
                cout << "2. MixedVegetable Juice" << endl;
                cout << "3. LeafyGreen Juice" << endl;
                cin >> opt;
                switch (opt)
                {
                case 0:
                    cout << "Going Back....!!!" << endl;
                    break;
                case 1:
                    juiceSelected.push_back(new RootVegetableJuice("Carrot", 30, "Earthy", "Local"));
                    ct1.setNumVegetableJuice(1);
                    break;
                case 2:
                    juiceSelected.push_back(new MixedVegetableJuice("Tomato", 35, "Savory", "Local"));
                    ct1.setNumVegetableJuice(1);
                    break;
                case 3:
                    juiceSelected.push_back(new LeafyGreenJuice("Spinach", 45, "Grassy", "Local"));
                    ct1.setNumVegetableJuice(1);
                    break;
                default:
                    cout << "Invalid Option Choosen" << endl;
                    break;
                }
                break;
            case 3:
                cout << "Mixed Juice Menu" << endl;
                cout << "0. Back" << endl;
                cout << "1. FruitAndVeggieJuice" << endl;
                cout << "2. SmoothieJuice" << endl;
                cin >> opt;
                switch (opt)
                {
                case 0:
                    cout << "Going Back....!!!" << endl;
                    break;
                case 1:
                    juiceSelected.push_back(new FruitAndVeggieJuice("Green", 55, "Refreshing"));
                    ct1.setNumMixedJuice(1);
                    break;
                case 2:
                    juiceSelected.push_back(new SmoothieJuice("Strawberry Banana", 70, "Creamy"));
                    ct1.setNumMixedJuice(1);
                    break;
                default:
                    cout << "Invalid Option Choosen" << endl;
                    break;
                }
                break;
            default:
                cout << "Invalid Option Choosen" << endl;
                break;
            }
        }

        cout << "\nTotal Juice:" << juiceSelected.size() << "\n";

        for (auto juicePtr : juiceSelected)
        {
            juicePtr->printInfo();
            cout << "\n-------------------\n";
            break;
        }

        // Sale ct2;
        // for (int i = 0; i < juiceSelected.size(); i++)
        // {
        //     juiceSelected[i]->printInfo();
        //     ct2=juiceSelected[i];
        //     cout << "\n-------------------\n";
        //     if (i + 1 < juiceSelected.size())
        //     {
        //         juiceSelected[i + 1]->printInfo();
        //     }
        // }

        // Sale s1("harry");
        // s1.set_juices_count(2);
        // s1.set_bill_amount(10.0);

        // Sale s2("harry");
        // s2.set_juices_count(3);
        // s2.set_bill_amount(15.0);

        // Sale ob3 = ob1 + ob2;
    }

    return 0;
}