#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[100];
    float salary;
    char dep[50];
} input[5];
void data(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the details of Employee No:%d", i + 1);
        printf("\n------------------------------------\n");
        printf("Enter the Employee Id : ");
        scanf("%d", &input[i].id);
        printf("Enter the name : ");
        getchar();
        gets(input[i].name);
        printf("Enter the salary : ");
        scanf("%f", &input[i].salary);
        printf("Enter the department : ");
        getchar();
        gets(input[i].dep);
    }
}

int main()
{
    data();

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("The details of Employee No: %d\n", i + 1);
        printf("\n------------------------------------\n");
        printf("Employee Id : %d\n", input[i].id);
        printf("Name : %s\n", input[i].name);
        printf("Salary : %g\n", input[i].salary);
        printf("Department : %s", input[i].dep);
    }
}