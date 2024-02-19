//mew and delete operators
#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int *ptr = &a;
    cout << "The address of " << ptr << " and the value is " << *(ptr) << endl;

    // new operator
    int *ptr2 = new int(20);
    cout << "The address of " << ptr2 << " and the value is " << *(ptr2) << endl;

    float *ptr3 = new float(20.2);
    cout << "The address of " << ptr3 << " and the value is " << *(ptr3) << endl;

    string *ptr4 = new string("Hello");
    cout << "The address of " << ptr4 << " and the value is " << *(ptr4) << endl;

    int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    *(arr) = 10;
    *(arr + 1) = 20;
    *(arr + 2) = 30;
    cout << "The address of arr[0] is " << arr << " and the value is " << arr[0] << endl;
    cout << "The address of arr[1] is " << arr + 1 << " and the value is " << arr[1] << endl;
    cout << "The address of arr[2] is " << arr + 2 << " and the value is " << arr[2] << endl;

    // delete operator
    delete[] arr;
    cout << "The address of arr[0] is " << arr << " and the value is " << arr[0] << endl;
    cout << "The address of arr[1] is " << arr + 1 << " and the value is " << arr[1] << endl;
    cout << "The address of arr[2] is " << arr + 2 << " and the value is " << arr[2] << endl;
    return 0;
}