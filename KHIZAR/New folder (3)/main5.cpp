#include <iostream>
using namespace std;
void detail(void);
void highestSalary(void);
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
    highestSalary();
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
void highestSalary(void)
{
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (input[i].salary > input[max].salary)
        {
            max = i;
        }
    }
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Details of Highest salaried person" << endl;
    cout << "Employee Id : " << input[max].id << endl;
    cout << "Name : " << input[max].name << endl;
    cout << "Salary : " << input[max].salary << endl;
    cout << "Department : " << input[max].dep << endl;
}