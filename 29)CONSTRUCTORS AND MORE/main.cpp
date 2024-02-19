//CONSTRUCTORS,DESTRUCTORS AND OVERLOADING
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    // void sign_in();

    Employee();
    Employee(int salary);

    ~Employee();
};

Employee::Employee()
{
    salary = 10000;
    cout << "Employee Created With Constructor With No Parameters" << endl;
}

Employee::Employee(int salary)
{
    cout << "Employee Created With Constructor With One Parameter" << endl;
    this->salary = salary;
}

Employee::~Employee()
{
    cout << "Employee Instance Being Removed:" << endl;
}

int main()
{
    Employee e1;
    cout << e1.salary << endl;

    // e1.salary=20000;  //onlu in e1 salary change occurs

    Employee e2;
    cout << e2.salary << endl;

    Employee e3(7000);
    cout << e3.salary << endl;

    Employee *e = new Employee;
    cout << "salary: " << e->salary << endl;
    delete e; // to free the RAM..overwritting won't free The SPace From the RAM
    e = new Employee(2000);
    cout << "salary: " << e->salary << endl;
    delete e; // to free the RAM..overwritting won't free The SPace From the RAM
    e = NULL;   //jamesha null kro..as you have delete the address that the pointer is pointing...this pointer is also known as dangling pointers..
    return 0;
}