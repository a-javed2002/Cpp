#include <iostream>
using namespace std;
void PoorPerformance(long salesArray[4][6]);
void HighestSale(long salesArray[4][6]);
int main()
{
    // 6 Employees //4 Months
    long salesArray[4][6];
    char months[4][30] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL"};

    // TAKING INPUT
    system("color 70");
    for (int i = 0; i < 4; i++)
    {
        cout << "DETAIL OF MONTH " << months[i] << endl;
        for (int j = 0; j < 6; j++)
        {
            cout << "ENTER SALES OF EMPLOYEE " << (j + 1) << endl;
            cin >> salesArray[i][j];
        }
    }

    cout << "PRESS ENTER TO CONTINUE";
    getchar();
    getchar();
    system("cls");

    // PRINTING THE DATA
    system("color 2F");
    for (int i = 0; i < 4; i++)
    {
        cout << "DETAIL OF MONTH " << months[i] << ":" << endl;
        for (int j = 0; j < 6; j++)
        {
            cout << "EMPLOYEE " << (j + 1) << " SALES ARE $" << salesArray[i][j] << endl;
        }
        cout << endl;
        cout << endl;
    }

    cout << "PRESS ENTER TO CONTINUE";
    getchar();
    system("cls");

    int option;
    while (1)
    {
        system("color 4F");
        cout << "1.Highest Sale" << endl;
        cout << "2.Poor Performance" << endl;
        cout << "3.EXIT" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            HighestSale(salesArray);
            break;
        case 2:
            system("cls");
            PoorPerformance(salesArray);
            break;
        case 3:
            system("color 70");
            exit(0);
            break;
        default:
            system("cls");
            system("color FC");
            cout << "INVALID OPTION" << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        }
    }

    return 0;
}

void HighestSale(long salesArray[4][6])
{
    system("cls");
    system("color 9F");
    int greatest = 0;
    int emp;
    for (int p = 0; p < 4; p++)
    {
        for (int q = 0; q < 6; q++)
        {
            if (salesArray[p][q] > greatest)
            {
                greatest = salesArray[p][q];
                emp = q;
            }
        }
    }
    cout << "THE GREATEST SALE IN THIS QUATER IS $" << greatest << " BY EMPLOYEE " << (emp + 1) << endl;
    cout << "PRESS ENTER TO CONTINUE";
    getchar();
    getchar();
    system("cls");
}

void PoorPerformance(long salesArray[4][6])
{
    int option;
    int m = 0, lowest = 999999, emp = 0;
    while (1)
    {
        system("color 5F");
        cout << "1.JANUARY" << endl
             << "2.FEBRUARY" << endl;
        cout << "3.MARCH" << endl
             << "4.APRIL" << endl
             << "5.EXIT" << endl;
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            m = 0, lowest = 999999, emp = 0;
            for (int i = 0; i < 6; i++)
            {
                if (salesArray[m][i] < lowest)
                {
                    lowest = salesArray[m][i];
                    emp = i + 1;
                }
            }
            cout << "THE LOWEST SALE IS $" << lowest << " BY EMPLOYEE " << emp << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        case 2:
            m = 1, lowest = 999999, emp = 0;
            for (int i = 0; i < 6; i++)
            {
                if (salesArray[m][i] < lowest)
                {
                    lowest = salesArray[m][i];
                    emp = i + 1;
                }
            }
            cout << "THE LOWEST SALE IS $" << lowest << " BY EMPLOYEE " << emp << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        case 3:
            m = 2, lowest = 999999, emp = 0;
            for (int i = 0; i < 6; i++)
            {
                if (salesArray[m][i] < lowest)
                {
                    lowest = salesArray[m][i];
                    emp = i + 1;
                }
            }
            cout << "THE LOWEST SALE IS $" << lowest << " BY EMPLOYEE " << emp << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        case 4:
            m = 3, lowest = 999999, emp = 0;
            for (int i = 0; i < 6; i++)
            {
                if (salesArray[m][i] < lowest)
                {
                    lowest = salesArray[m][i];
                    emp = i + 1;
                }
            }
            cout << "THE LOWEST SALE IS $" << lowest << " BY EMPLOYEE " << emp << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        case 5:
            system("color 70");
            exit(0);
            break;
        default:
            system("cls");
            system("color FC");
            cout << "INVALID OPTION" << endl;
            cout << "PRESS ENTER TO CONTINUE";
            getchar();
            getchar();
            system("cls");
            break;
        }
    }
}
