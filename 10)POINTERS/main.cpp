#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;

    /* & ---> (Address of) Operator*/
    cout << "The address of a is " << &a << endl;//a ka address
    cout << "The address of a is " << b << endl;//pointer b will tell a ka address

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;//pointer b will tell a ki value...as b will undergo dereference operator

    // Pointer to pointer
    int **c = &b;//c stores address of pointers
    cout << "The address of b is " << &b << endl;//b ka address
    cout << "The address of b is " << c << endl;//pointer c will tell b ka address
    cout << "The value at address c is " << *c << endl;//by dereferencing c will tell address of a
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;//by double dereferencing c will tell value of a

    return 0;
}
