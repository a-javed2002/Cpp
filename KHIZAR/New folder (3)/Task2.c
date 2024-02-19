#include<stdio.h>
#include<string.h>
    struct Employee
    {           
        int id;
        char name[100];
        float salary;
        char dep[50];
    }input[5];
int main()
{
    input[2].id=3001;
    input[2].salary=30000;
    strcpy(input[2].dep,"IT dept");

printf("%d %g %s",input[2].id,input[2].salary,input[2].dep);
}