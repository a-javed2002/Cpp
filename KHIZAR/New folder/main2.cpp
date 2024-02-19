#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
void packages();
void payment();
void proceed();
void selection(int s);
void gotoxy(int x, int y);
void AutoInsurance();
void HomeInsurance();
void HealthInsurance();

struct BasicInformation
{
    string name;
    string email;
    string phone;
};

int status;
BasicInformation customer;

int main()
{
    int option1, valid = 1;
    do
    {
        cout << "1.Auto Insurance" << endl;
        cout << "2.Home Insurance" << endl;
        cout << "3.Health Insurance" << endl;
        cout << "4.Exit" << endl;
        cin >> option1;
        system("cls");
        switch (option1)
        {
        case 1:
            AutoInsurance();
            break;
        case 2:
            HomeInsurance();
            break;
        case 3:
            HealthInsurance();
            break;

        case 4:
            exit(1);
            break;
        default:
            cout << "Invalid Option" << endl;
            valid = 0;
            proceed();
            break;
        }
    } while (valid == 0);
    system("cls");
    system("pause");
}

void AutoInsurance()
{
    int modelNumber, registrationNumber, option2;
    string vehicleName;
    status = 1;
    cout << "Auto Insurance Selected" << endl;
    cout << "Enter Your Name" << endl;
    getline(cin, customer.name);
    cin.ignore();
    cout << "Enter Your Email" << endl;
    getline(cin, customer.email);
    cin.ignore();
    cout << "Enter Your Phone Number" << endl;
    getline(cin, customer.phone);
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cout << "1.Car" << endl;
    cout << "2.Bike" << endl;
    cin >> option2;
    // cin.ignore();
    // cin.ignore();

    // system("cls");
    switch (option2)
    {
    case 1:
    system("cls");
    system("color CF");
        cout << "Car" << endl;
        cout << endl;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cout << "Enter Name Of Car" << endl;
        getline(cin, vehicleName);
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cout << "Enter Model Number Of " << vehicleName << endl;
        cin >> modelNumber;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cout << "Enter Registration Number Of " << vehicleName << endl;
        cin >> registrationNumber;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        proceed();
        cout << "Benefits AND PACKAGES" << endl;
        cout << "Silver-->9999rs/month-->inner body" << endl;
        cout << "Gold-->17999rs/month-->inner body and outer body" << endl;
        cout << "Premium-->24999rs/month-->inner body and outer body and other parts" << endl;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        packages();
        proceed();
        payment();
        break;
    case 2:
        cout << "Bike" << endl;
        cout << endl;
        cout << "Enter Name Of Bike" << endl;
        getline(cin, vehicleName);
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cout << "Enter Model Number Of " << vehicleName << endl;
        cin >> modelNumber;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cout << "Enter Registration Number Of " << vehicleName << endl;
        cin >> registrationNumber;
        cin.ignore();
        cin.ignore();
        proceed();
        cout << "Benefits AND PACKAGES" << endl;
        cout << "Silver-->9999rs/month-->inner body" << endl;
        cout << "Gold-->17999rs/month-->inner body and outer body" << endl;
        cout << "Premium-->24999rs/month-->Fully Insured" << endl;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        packages();
        proceed();
        payment();
        break;
    default:
        cout << "Invalid Vehicle" << endl;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        proceed();
        break;
    }
}

void HomeInsurance()
{
    cout << "Home Insurance Selected" << endl;
    status = 2;
    cout << "Enter Your Name" << endl;
    getline(cin, customer.name);
    cin.ignore();
    cout << "Enter Your Email" << endl;
    getline(cin, customer.email);
    cin.ignore();
    cout << "Enter Your Phone Number" << endl;
    getline(cin, customer.phone);
    cin.ignore();
    cin.ignore();
    cin.ignore();
    // proceed();
    cout << "Benefits AND PACKAGES" << endl;
    cout << "Silver-->9999rs/month-->inner body" << endl;
    cout << "Gold-->17999rs/month-->inner body and outer body" << endl;
    cout << "Premium-->24999rs/month-->Fully Insured" << endl;
    packages();
    proceed();
    payment();
}

void HealthInsurance()
{
    cout << "Health Insurance Selected" << endl;
    status = 3;
    cout << "Enter Your Name" << endl;
    getline(cin, customer.name);
    cin.ignore();
    cout << "Enter Your Email" << endl;
    getline(cin, customer.email);
    cin.ignore();
    cout << "Enter Your Phone Number" << endl;
    getline(cin, customer.phone);
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cin.ignore();
    proceed();
    cout << "Benefits AND PACKAGES" << endl;
    cout << "Silver-->9999rs/month-->inner body" << endl;
    cout << "Gold-->17999rs/month-->inner body and outer body" << endl;
    cout << "Premium-->24999rs/month-->Fully Insured" << endl;
    packages();
    proceed();
    payment();
}

void packages()
{
    int option3;
    cout << endl;
    cin.ignore();
    cout << "1.Silver" << endl;
    cout << "2.Gold" << endl;
    cout << "3.Premium" << endl;
    cin >> option3;
    switch (option3)
    {
    case 1:
        cout << "Silver" << endl;
        break;
    case 2:
        cout << "Gold" << endl;
        break;
    case 3:
        cout << "Premium" << endl;
        break;
    default:
        cout << "Invalid Package" << endl;
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
        cout << "Thank You..Our Inspection Team Will Soon Contact You" << endl;
        break;
    case 2:
        cout << "Jazz Cash Link" << endl;
        cout << "Thank You..Our Inspection Team Will Soon Contact You" << endl;
        break;
    case 3:
        cout << "Easy paisa Link" << endl;
        cout << "Thank You..Our Inspection Team Will Soon Contact You" << endl;
        break;
    default:
        cout << "Invalid Payment Method" << endl;
        // system("color FC");
        proceed();
        system("cls");
        break;
    }
    system("pause");
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