#include <iostream>
using namespace std;
int main()
{
    // ************* Float, double and long double Literals****************
    float d = 34.4F;       // we can use f or F..if we do not use,then it will create problem during functions
    long double e = 34.4L; // we can use l or L..if we do not use,then it will create problem during functions
    // we use these prefixes after literal to differentiate them..from each other...
    cout << "The size of d is " << d << endl; // see change in functions
    cout << "The size of e is " << e << endl; // see change in functions
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The value of d is " << d << endl << "The value of e is " << e;

    return 0;
}