#include <iostream>
using namespace std;
typedef struct employee//hum main k andar bhi kar saktay hain..per tab sirf main acess kr sakta hay..not other functions
{
    /* data */
    char name[2][20];
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep;
int main()
{
    struct employee person1, person2;
    // strcpy(person1.name,"YOUSUF");//abb c++ may string kya hota hay...idk
    person1.eId = 123;
    person1.favChar = 'Y';
    person1.salary = 100000;
    // cout<<"THE NAME IS "<<person1.name<<endl;
    cout << "THE EMPLOYEE ID IS " << person1.eId << endl;
    cout << "THE FAVOURITE CHARACTER IS " << person1.favChar << endl;
    cout << "THE SALARY IS $" << person1.salary << endl;

    person2.eId = 121;
    person2.favChar = 'S';
    person2.salary = 190000;
    cout << "THE EMPLOYEE ID IS " << person2.eId << endl;
    cout << "THE FAVOURITE CHARACTER IS " << person2.favChar << endl;
    cout << "THE SALARY IS $" << person2.salary << endl;

    ep person3; // benefit of typedef
    person3.eId = 321;
    person3.favChar = 'K';
    person3.salary = 110000;
    cout << "THE EMPLOYEE ID IS " << person3.eId << endl;
    cout << "THE FAVOURITE CHARACTER IS " << person3.favChar << endl;
    cout << "THE SALARY IS $" << person3.salary << endl;

    ep arr[30];
    arr[0].eId = 213;
    arr[0].favChar = 'A';
    arr[0].salary = 999999;
    cout << "THE EMPLOYEE ID IS " << arr[0].eId << endl;
    cout << "THE FAVOURITE CHARACTER IS " << arr[0].favChar << endl;
    cout << "THE SALARY IS $" << arr[0].salary << endl;

    arr[1].eId = 215;
    arr[1].favChar = 'M';
    arr[1].salary = 991299;
    cout << "THE EMPLOYEE ID IS " << arr[1].eId << endl;
    cout << "THE FAVOURITE CHARACTER IS " << arr[1].favChar << endl;
    cout << "THE SALARY IS $" << arr[1].salary << endl;

    int total;
    cout << "ENTER TOTAL NUMBER OF EMPLOYEES" << endl;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cout << "ENTER THE EMPLOYEE ID" << endl;
        cin >> (arr[i].eId);
        cout << "ENTER THE FAVOURITE CHARACTER" << endl;
        cin >> (arr[i].favChar);
        cout << "ENTER THE SALARY IN $" << endl;
        cin >> (arr[i].salary);
    }
    for (int i = 0; i < total; i++)
    {
        cout << "THE EMPLOYEE ID IS " << arr[i].eId << endl;
        cout << "THE FAVOURITE CHARACTER IS " << arr[i].favChar << endl;
        cout << "THE SALARY IS $" << arr[i].salary << endl;
    }
    return 0;
}