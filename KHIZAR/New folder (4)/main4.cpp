#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;
typedef struct BasicInformation
{
    char ISBN[2][20];
    char title[3][20];
    char author[3][20];
    int flag[10];
    float price[10];
} BI;
int main()
{
    BI Customers;
    system("color 70");
    int option, a = 1, b = 1, c = 1, d = 0, count = 0, num;
    char temp1[3][20];
    char str[10][20], str2[100];
    do
    {
        // current date/time based on current system
        time_t now = time(0);
        // convert now to string form
        char *dt = ctime(&now);
        cout << "The local date and time is: " << dt << endl;
        strcpy(str[count], dt);
        // cout << "The local date 2 and time is: " << str[count] << endl;//for testing

        cout << "1. Add book information";
        cout << "\t\t\t\t\t 2. Display book information" << endl; // in abc order
        cout << "3. List all books of given author";
        cout << "\t\t\t 4. List the title of specified book" << endl;
        cout << "5. List the count of books in the library number";
        cout << "\t 6. List the books in the order of accession" << endl; // according to date..jaisay aaya..wasay
        cout << "7. EXIT" << endl;
        cout << endl;
        cout << "Enter an option number" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "ENTER TITLE OF BOOK" << endl;
            cin >> Customers.title[count];
            getchar();
            cout << "ENTER AUTHOR NAME" << endl;
            cin >> Customers.author[count];
            getchar();
            do
            {
                cout << "ENTER 13 DIGITS ISBN NUMBER" << endl;
                cout << "EXAMPLE-->ISBN-->9789295055025" << endl;
                cin >> Customers.ISBN[count];
                cout << "LENGTH OF ISBN IS " << strlen(Customers.ISBN[count]) << endl;
                if (strlen(Customers.ISBN[count]) == 13) // DANGER
                {
                    b = 0;
                }
            } while (b == 1);
            cout << "ENTER PRICE OF BOOK IN DOLLARS" << endl;
            cin >> Customers.price[count];
            do
            {
                cout << "ENTER 1 IF BOOK IS AVAILABLE IN LIBRARY" << endl;
                cout << "ENTER 0 IF BOOK IS ISSUED" << endl;
                cin >> Customers.flag[count];
                if (Customers.flag[count] == 1 || Customers.flag[count] == 0)
                {
                    c = 0;
                }
                else
                {
                    continue;
                }
            } while (c == 1);

            break;
        case 2:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "TOTAL BOOKS IN LIBRARY: " << count << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Title: " << Customers.title[i] << endl;
                cout << "Author: " << Customers.author[i] << endl;
                cout << "ISBN: " << Customers.ISBN[i] << endl;
                cout << "Price $" << Customers.price[i] << endl;
                // cout << ("Price $%.2f\n", price[i])<<endl;
                if (Customers.flag[i] == 1)
                {
                    cout << "STATUS:BOOK IS AVAILABLE IN LIBRARY" << endl;
                }
                else
                {
                    cout << "STATUS:BOOK IS ISSUED" << endl;
                }
            }
            cout << "PRESS ENTER TO CONTINUE...";
            getchar();
            getchar();
            break;
        case 3:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "ENTER AUTHOR NAME..TO SEE HIS/HER BOOKS" << endl;
            cin >> temp1[0];
            cout << endl;
            ;
            for (int j = 0; j < count; j++)
            {
                if (strcmp(temp1[j], Customers.author[j]) == 0)
                {
                    cout << "BOOK:" << Customers.title[j] << endl;
                    d = 1;
                }
            }
            if (d == 1)
            {
                cout << "BOOKS OF AUTHOR: " << temp1 << endl;
            }
            else
            {
                cout << "NO BOOKS FOUND.." << endl;
            }
            cout << "PRESS ENTER TO CONTINUE...";
            //            cin >> str;
            getchar();
            break;
        case 4:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "TOTAL BOOKS IN LIBRARY: " << count;
            cout << "ENTER BOOK NUMBER";
            cin >> num;
            for (int k = 0; k < count; k++)
            {
                if (num == (k + 1))
                {
                    cout << "THE BOOK IS " << Customers.title[k] << endl;
                }
                else
                {
                    cout << "NO BOOK FOUND..!!!" << endl;
                }
            }
            cout << "PRESS ENTER TO CONTINUE...";
            //            cin >> str;
            getchar();
            break;
        case 5:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "TOTAL BOOKS IN LIBRARY: " << count << endl;
            for (int p = 0; p < count; p++)
            {
                cout << "BOOK " << p + 1 << ":" << Customers.title[p] << endl;
            }
            cout << "PRESS ENTER TO CONTINUE...";
            //            cin >> str;
            getchar();
            break;
        case 6:
            cout << "OPTION " << option << " SELECTED" << endl;
            cout << "The local date and time is: " << str[count] << endl;
            cout << "TOTAL BOOKS IN LIBRARY: " << count << endl;
            for (int i = 0; i < count; i++)
            {
                cout << "Title: " << Customers.title[i] << endl;
                cout << "Author: " << Customers.author[i] << endl;
                cout << "ISBN: " << Customers.ISBN[i] << endl;
                cout << "Price $" << Customers.price[i] << endl;
                // cout << ("Price $%.2f\n", price[i])<<endl;
                if (Customers.flag[i] == 1)
                {
                    cout << "STATUS:BOOK IS AVAILABLE IN LIBRARY" << endl;
                }
                else
                {
                    cout << "STATUS:BOOK IS ISSUED" << endl;
                }
            }
            break;
        case 7:
            cout << "OPTION " << option << " SELECTED" << endl;
            a = 0;
            break;
        default:
            cout << endl;
            cout << "You have entered the wrong option number. Please try again!" << endl;
            break;
        }
        count++;
        system("cls");
    } while (a == 1);
    return 0;
}
// 978-92-95055-02-5
// 978...EAN Prefix
// 92...Registration Group
// 95055...Registrant
// 02...Publication
// 5...Check Digit