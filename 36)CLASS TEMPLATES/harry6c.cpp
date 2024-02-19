#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am First Fn() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am Template Fn() " << a << endl;
}

int main()
{
    func(5);        //Exact Match Takes The Highest Priority....
    func('c');
    return 0;
}