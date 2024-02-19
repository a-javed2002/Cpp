#include <iostream>
using namespace std;
void packages();
void payment();
int main()
{
    packages();
    payment();
    return 0;
}
void packages()
{
	system("color 2F");
//	system("color 10");
    int option3;
    char str;
    cout << "Silver-->10000rs/month-->inner body" << endl;
    cout << "Gold-->100000rs/month-->inner body and outer body" << endl;
    cout << "Premium-->100000rs/month-->inner body and outer body and other parts" << endl;
    cout << endl;
    cout << "1.Silver" << endl;
    cout << "2.Gold" << endl;
    cout << "3.Premium" << endl;
    cin >> option3;
    switch (option3)
    {
    case 1:
        cout << "Silver" << endl;
        system("color 2A");
        cout << "PRESS ENTER TO CONTINUE" << endl;
        cin >> str;
        system("cls");
        break;
    case 2:
        cout << "Gold" << endl;
        system("color 2B");
        cout << "PRESS ENTER TO CONTINUE" << endl;
        cin >> str;
        system("cls");
        break;
    case 3:
        cout << "Premium" << endl;
        system("color CF");
        cout << "PRESS ENTER TO CONTINUE" << endl;
        cin >> str;
        system("cls");
        break;
    default:
    	system("cls");
    	system("color FC");
        cout << "Invalid Package" << endl;
        cout << "PRESS ENTER TO CONTINUE" << endl;
        cin >> str;
        system("cls");
        break;
    }
}
void payment()
{
	system("color 2F");
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
        cout << "Invalid Payment Method";
        break;
    }
}