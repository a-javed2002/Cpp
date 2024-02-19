// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream> //ctrl + click on headers..to see there detail..
// 2. User defined header files: It is written by the programmer
#include "main2.cpp" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl; // endl for new line....
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // post increment
    cout << "The value of a-- is " << a-- << endl; // post decrement
    cout << "The value of ++a is " << ++a << endl; // pre increment
    cout << "The value of --a is " << --a << endl; // pre decrement
    cout << endl;

    // Assignment Operators-- > used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison or Relational operators
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

    // Bitwise operators
    return 0;
}
