#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string cnic;
    int id;

    void sign_in();
    void sign_out();
};

void Employee::sign_in()
{
    cout << "signing in..." + name << endl;
}

void Employee::sign_out()
{
    cout << "signing out..." + name << endl;
}

int main()
{
    Employee e1;
    e1.name = "ALI";
    e1.sign_in();
    e1.sign_out();

    Employee *e;
    e = new Employee;
    e->name = "USMAN";
    e->sign_in();
    e->sign_out();
    
    return 0;
}