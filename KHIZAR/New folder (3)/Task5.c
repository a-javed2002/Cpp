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
void highestsal(void)
{
    int i;
    int max = 0;
    for (i = 0; i < 5; i++)
    {
        if (input[i].salary > input[max].salary)
        {
            max = i;
        }
    }
    printf("Details of Highest salaried person\n");
    printf("Employee Id : %d\n", input[max].id);
    printf("Name : %s\n", input[max].name);
    printf("Salary : %g\n", input[max].salary);
    printf("Department : %s", input[max].dep);
}
int main()
{
    data();
    highestsal();
}