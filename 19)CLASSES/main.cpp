// STRUCTURES ARE NOT CAPABLE OF HIDING DATA..AND WE CANNOT ADD FUNCTIONS IN STRUCTURES
// THUS INSECURE..AND LIMIT..THEREFORE WE MAKE CLASSES..
// THERE ARE TWO TYPES OF CLASSES...
// PUBLIC AND PRIVATE....
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // CANNOT ACCESS DIRECTLY..ONLY USED BY FUNCTIONS THAT ARE IN CLASS

public:
    int d, e;                             // CAN ACCESS DIRECTLY..AND CAN BE USED IN FUNCTIONS THAT ARE IN CLASS
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// scope resolution operator...is necessary..
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 134; -->This will throw error as "a" is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();
    return 0;
}
