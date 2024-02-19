// common variables stores once..
// and variables and different things are stored seperately...
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    // DRIVER CODE..
    int n;
    cout << "ENTER TOTAL NUMBER OF ITEM TO BE STORED" << endl;
    cin >> n;
    // system("cls");
    Shop stationary;
    stationary.initCounter();
    for (size_t i = 0; i < n; i++)
    {
        stationary.setPrice();
    }
    // system("cls");
    stationary.displayPrice();
    return 0;
}
