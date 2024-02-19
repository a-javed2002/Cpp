#include <iostream>
#include <string>
using namespace std;
void func1();
void func2();
void func3();
typedef struct BasicInformattion
{
    string name;
    int roll_no;
    int age;
    string address;
} BI;
int main()
{
    int n;
    cout << "ENTER TOTAL NUMBER OF STUDENTS" << endl;
    cin >> n;
    BI students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "FOR STUDENT " << (i + 1) << endl;
        cout << "ENTER NAME" << endl;
        getline(cin, students[i].name);
        cout << "ENTER ROLL NUMBER" << endl;
        cin >> students[i].roll_no;
        cout << "ENTER AGE" << endl;
        cin >> students[i].age;
        // AGE VALIDATION...
        while (students[i].age <= 10 || students[i].age >= 15)
        {
            cout << "ENTER AGE" << endl;
            cin >> students[i].age;
        }
        cout << "ENTER ADDRESS" << endl;
        getline(cin, students[i].address);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "FOR STUDENT " << (i + 1) << endl;
        cout << "NAME: " << students[i].name << endl;
        cout << "ROLL NUMBER: " << students[i].roll_no << endl;
        cout << "AGE: " << students[i].age << endl;
        cout << "ADDRESS: " << students[i].address << endl;
    }

    cout << endl;
    // func1(n, students);
    for (int i = 0; i < n; i++)
    {
        if (students[i].age == 14)
        {
            cout << "NAME: " << students[i].name << endl;
        }
    }

    cout << endl;
    // func2();
    for (int i = 0; i < n; i++)
    {
        if (((students[i].roll_no) % 2) == 0)
        {
            cout << "NAME: " << students[i].name << endl;
        }
    }

    cout << endl;
    // func3();
    int user_roll_no;
    cout << "ENTER ROLL NUMBER" << endl;
    cin >> user_roll_no;
    for (int i = 0; i < n; i++)
    {
        if (students[i].roll_no == user_roll_no)
        {
            cout << "NAME: " << students[i].name << endl;
            cout << "ROLL NUMBER: " << students[i].roll_no << endl;
            cout << "AGE: " << students[i].age << endl;
            cout << "ADDRESS: " << students[i].address << endl;
        }
    }

    return 0;
}
// void func1(int n, BI students[10])
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (students[i].age == 14)
//         {
//             cout << students[i].name << endl;
//         }
//     }
// }