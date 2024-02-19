#include <iostream>

using namespace std;

int main()
{
    int a = 34;
    cout << "The value of a was: " << a << endl;
    a = 45;
    cout << "The value of a is: " << a << endl;
    // Constants in C++
    const int b = 3;
    cout << "The value of b was: " << b << endl;
    // b = 5; // You will get an error because b is a constant
    cout << "The value of b is: " << b << endl;

    return 0;
}