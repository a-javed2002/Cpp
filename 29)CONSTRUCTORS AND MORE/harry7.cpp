#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
//agar copy constructor wala code nhi hay..phir bhi by default..compiler copy krdayta....
//magar sirf copy krta hay...wo line nhi ayegi.."The number for this object is".....
//agar object bana k...next line may copy krwaogay..ya object ko value assign krogay...tou copy constructor invoked nhi hoga...
//z2 = z; // Copy constructor not called
//same line may hoga...like
//1)Number z1(z); // Copy constructor invoked
//2)Number z3 = z; // Copy constructor invoke