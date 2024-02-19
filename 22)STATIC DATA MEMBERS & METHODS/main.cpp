#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)//only use static variables...
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee//static is always initialize outside the class..
int Employee::count; // Default value is 0
// int Employee::count=1000; // we can initialize it outside the class..in class it will give error..

int main()
{
    Employee harry, bob, john;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount(); // the method that can use to run static functions in driver code...

    bob.setData();
    bob.getData();
    Employee::getCount(); // the method that can use to run static functions in driver code...

    john.setData();
    john.getData();
    Employee::getCount(); // the method that can use to run static functions in driver code...

    return 0;
}
