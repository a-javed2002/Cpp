#include <iostream>
#include <cstring>
using namespace std;
struct Employee
{
    int id;
    char name[100];
    float salary;
    char dep[50];
} input[5];
int main()
{
    input[2].id = 3001;
    input[2].salary = 30000;
    strcpy(input[2].dep, "IT dept");

    cout << "Output is: " << endl;
    cout << input[2].id << endl;
    cout << input[2].salary << endl;
    cout << input[2].dep;
    return 0;
}