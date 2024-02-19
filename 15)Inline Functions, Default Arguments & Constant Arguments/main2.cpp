#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    static int c = 0;//this executes only once...but don't use static with in inline function..bcz of cache problem
    c++;//c value will be remembered...by function...example..."bank token machine"
    return a * b + c;
}
int main()
{
    int a, b;
    cout << "ENTER VALUE OF a AND b" << endl;
    cin >> a >> b;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    cout << "THE PRODUCT OF a AND b IS " << product(a, b) << endl;
    return 0;
}