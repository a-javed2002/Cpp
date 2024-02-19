#include <iostream>
#include <windows.h>
using namespace std;
void packages();
void payment();
void proceed();
void selection(int s);
void gotoxy(int x, int y);
typedef struct BasicInformation
{
    char name[20][100];
    char email[20][100];
    char phone[20][100];
} BI;
int main()
{
    BI customer;
    int option1, option2, i = 0, j = 0;
    int status[20], modelNumber[20], registrationNumber[20];
    char vehicleName[100][100];
    system("color 9F");
    gotoxy(49, 12);
    cout << "WELCOME TO KK INSURANCE" << endl;
    gotoxy(49, 13);
    cout << "Press Any Key To Continue";
    cin.ignore();
    system("cls");
    while (1)
    {
        system("color BF");
        cout << "1.Auto Insurance" << endl;
        cout << "2.Home Insurance" << endl;
        cout << "3.Health Insurance" << endl;
        cout << "4.Exit" << endl;
        cin >> option1;
        system("cls");
        switch (option1)
        {
        case 1:
            cout << "Auto Insurance Selected" << endl;
            status[i] = 1;
            cout << "Enter Your Name" << endl;
            cin >> customer.name[i][j];
            getchar();
            getchar();
            cout << "Enter Your Email" << endl;
            cin >> customer.email[i][j];
            cin.ignore();
            cout << "Enter Your Phone Number" << endl;
            cin >> customer.phone[i][j];
            system("color CF");
            cout << "1.Car" << endl;
            cout << "2.Bike" << endl;
            cin >> option2;
            system("cls");
            // cout<<"1.Plane"<<endl;
            switch (option2)
            {
            case 1:
                system("color BC");
                cout << "Car" << endl;
                cout << "Enter Name Of Car" << endl;
                cin >> vehicleName[i][j];
                cout << "Enter Model Number Of " << vehicleName[i][j] << endl;
                cin >> modelNumber[i];
                cout << "Enter Registration Number Of " << vehicleName[i][j] << endl;
                cin >> registrationNumber[i];
                proceed();
                system("color CF");
                cout << "Benefits AND PACKAGES" << endl;
                cout << "Silver-->9999rs/month-->inner body" << endl;
                cout << "Gold-->17999rs/month-->inner body and outer body" << endl;
                cout << "Premium-->24999rs/month-->inner body and outer body and other parts" << endl;
                packages();
                proceed();
                system("color CA");
                payment();
                break;
            case 2:
                system("color AD");
                cout << "Bike" << endl;
                cout << "Enter Name Of Bike" << endl;
                cin >> vehicleName[i][j];
                cout << "Enter Model Number Of " << vehicleName[i][j] << endl;
                cin >> modelNumber[i];
                cout << "Enter Registration Number Of " << vehicleName[i][j] << endl;
                cin >> registrationNumber[i];
                proceed();
                system("cls");
                system("color 5F");
                cout << "Benefits AND PACKAGES" << endl;
                cout << "Silver-->3000rs/month-->inner body" << endl;
                cout << "Gold-->9999rs/month-->inner body and outer body" << endl;
                cout << "Premium-->11999rs/month-->inner body and outer body and other parts" << endl;
                packages();
                proceed();
                system("color 9E");
                payment();
                break;
            default:
                cout << "Invalid Vehicle" << endl;
                system("color FC");
                proceed();
                break;
            }
            i++; // option1 case 1 end
            break;
        case 2:
            cout << "Home Insurance Selected" << endl;
            status[i] = 2;
            cout << "Enter Your Name" << endl;
            cin >> customer.name[i][j];
            cout << "Enter Your Email" << endl;
            cin >> customer.email[i][j];
            cout << "Enter Your Phone Number" << endl;
            cin >> customer.phone[i][j];
            proceed();
            cout << "Benefits AND PACKAGES" << endl;
            cout << "Silver-->9999rs/month-->COVERS THE EXTERIOR HOUSE DAMAGES" << endl;
            cout << "Gold-->19999rs/month-->COVERS THE EXTERIOR AND INTERIOR HOUSE DAMAGES" << endl;
            cout << "Premium-->24999rs/month-->FULLY INSURED,COVERS THE EXTERIOR AND INTERIOR HOUSE DAMAGES,THEFT,NATURAL DISASTERS" << endl;
            packages();
            proceed();
            system("color 9E");
            payment();
            i++;
            break;
        case 3:
            cout << "Health Insurance Selected" << endl;
            status[i] = 3;
            cout << "Enter Your Name" << endl;
            cin >> customer.name[i][j];
            cout << "Enter Your Email" << endl;
            cin >> customer.email[i][j];
            cout << "Enter Your Phone Number" << endl;
            cin >> customer.phone[i][j];
            proceed();
            cout << "Benefits AND PACKAGES" << endl;
            cout << "Silver-->6666rs/month-->COVERS SINGLE PERSON MEDICAL EXPENSES" << endl;
            cout << "Gold-->11999rs/month-->COVERS COUPLES MEDICAL EXPENSES" << endl;
            cout << "Premium-->19999rs/month-->COVERS WHOLE FAMILY MEDICAL EXPENSES" << endl;
            packages();
            proceed();
            system("color 9E");
            payment();
            i++;
            break;
        case 4:
            system("cls");
            cout << "Exit Selected" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid Option" << endl;
            system("color FC");
            proceed();
            break;
        }
    }
    for (int k = 0; k < i; k++)
    {
        // cout<<status[i];//For Testing
        selection(status[i]);
        cout << "The Name is " << customer.name[k][j] << endl;
        cout << "The Email is " << customer.email[k][j] << endl;
        cout << "The Phone Number is " << customer.phone[k][j] << endl;
        cout << endl;
    }
    return 0;
}
void selection(int s)
{
    if (s == 1)
    {
        cout << "Auto Insurance" << endl;
    }
    else if (s == 2)
    {
        cout << "Home Insurance" << endl;
    }
    else if (s == 3)
    {
        cout << "Life Insurance" << endl;
    }
}
void packages()
{
    int option3;
    cout << endl;
    cout << "1.Silver" << endl;
    cout << "2.Gold" << endl;
    cout << "3.Premium" << endl;
    cin >> option3;
    switch (option3)
    {
    case 1:
        cout << "Silver" << endl;
        system("color 8F");
        break;
    case 2:
        cout << "Gold" << endl;
        system("color EF");
        break;
    case 3:
        cout << "Premium" << endl;
        system("color AF");
        break;
    default:
        cout << "Invalid Package" << endl;
        system("color FC");
        proceed();
        system("cls");
        break;
    }
}
void payment()
{
    int option4;
    cout << "Select Payment Method" << endl;
    cout << "1.Online Banking" << endl;
    cout << "2.Jazz Cash" << endl;
    cout << "3.Easy Paisa" << endl;
    cin >> option4;
    switch (option4)
    {
    case 1:
        cout << "Bank Link" << endl;
        cout << "Thank You..Our Inspection Team Soon Contact You" << endl;
        break;
    case 2:
        cout << "Jazz Cash Link" << endl;
        cout << "Thank You..Our Inspection Team Soon Contact You" << endl;
        break;
    case 3:
        cout << "Easy paisa Link" << endl;
        cout << "Thank You..Our Inspection Team Soon Contact You" << endl;
        break;
    default:
        cout << "Invalid Payment Method" << endl;
        system("color FC");
        proceed();
        system("cls");
        break;
    }
}
void proceed()
{
    cout << "PRESS ENTER TO CONTINUE";
    cin.ignore();
    cin.ignore();
    system("cls");
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}