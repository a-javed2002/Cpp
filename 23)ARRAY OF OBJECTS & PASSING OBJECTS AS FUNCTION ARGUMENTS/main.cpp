#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    int n;
    cout << "ENTER YOUR COMPANY'S TOTAL EMPLOYEES" << endl;
    cin >> n;
    Employee fb[n];
    for (int i = 0; i < n; i++)
    {
        cout << "ENTER ID OF EMPLOYEE " << i + 1 << endl;
        fb[i].setId();
        fb[i].getId();
        cout << endl;
    }

    return 0;
}
