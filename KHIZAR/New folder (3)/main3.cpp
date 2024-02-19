#include <iostream>
struct Employee
{
    int id;
    char name[100];
    float salary;
    char dep[50];
} input[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        input[i].id = 0;
        input[i].salary = 0;
    }
}
