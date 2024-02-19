#include <iostream>
// #include <string>
using namespace std;

template <class T>
T find_max(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    return result;
}

int main()
{
    int x, y, z;
    x = 35;
    y = 30;
    z = find_max<int>(x, y);
    cout << "Max Integer: " << z << endl;

    string p, q, r;
    p = "Ali";
    q = "Bob";
    r = find_max<string>(p, q);
    cout << "Max String: " << r << endl;

    return 0;
}