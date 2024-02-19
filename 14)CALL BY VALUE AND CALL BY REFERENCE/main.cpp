#include <iostream>
using namespace std;
void swap1(int, int);
void swap2(int *, int *);
void swap3(int &, int &);
int main()
{
    int a = 4, b = 5;

    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    swap1(a, b); // not work
    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    swap2(&a, &b); // work
    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    swap3(a, b); // work..but comment out swap2
    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    return 0;
}
void swap1(int x, int y) // swap nhi hoga..."in main"...by using call by value...
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap2(int *x, int *y) // swap hoga..."in main"...by using pointer reference...
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap3(int &x, int &y) // swap hoga..."in main"...by using call by reference variable...
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}