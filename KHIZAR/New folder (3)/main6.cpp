#include <iostream>
using namespace std;
void detail(void);
void salary(void);
struct Employee
{
    int id;
    char name[100];
    float salary;
    char dep[50];
} input[5];
int main()
{
    detail();
    salary();
}
void detail(void)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the details of Employee No:" << i + 1 << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter the Employee Id : ";
        cin >> input[i].id;
        cout << "Enter the name : ";
        getchar();
        cin >> input[i].name;
        cout << "Enter the salary : ";
        cin >> input[i].salary;
        cout << "Enter the department : ";
        getchar();
        cin >> input[i].dep;
    }
}
void salary(void)
{
    int i;
    cout << endl;
    cout << "List of Employees with salary above Rs.15000" << endl;
    for (i = 0; i < 5; i++)
    {
        if (input[i].salary > 15000)
        {
            cout << endl;
            cout << "------------------------------------" << endl;
            cout << "Employee Id : " << input[i].id << endl;
            cout << "Name : " << input[i].name << endl;
            cout << "Salary : " << input[i].salary << endl;
            cout << "Department : " << input[i].dep << endl;
        }
    }
}