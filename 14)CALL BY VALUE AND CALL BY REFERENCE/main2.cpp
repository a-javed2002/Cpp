//^ RETURN BY REFERENCE
#include <iostream>
using namespace std;
int &swap3(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return x;
}
int main()
{
    int a = 4, b = 5;

    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    swap3(a, b);
    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    a = 4, b = 5;
    swap3(a, b) = 780; // value of a changes...to 780
    cout << "THE VALUE OF a IS " << a << " AND THE VALUE OF b IS " << b << endl;

    return 0;
}