#include <iostream>
using namespace std;
int main()
{
    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << (float)a << endl;//Method 1
    cout << "The value of a is " << float(a) << endl;//Method 2
    cout<<endl;

    cout << "The value of b is " << b << endl;
    cout << "The value of b is " << (int)b << endl;//Method 1
    cout << "The value of b is " << int(b) << endl;//Method 2
    cout<<endl;

    int c = int(b);//VALID STATEMENT....

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}