// Templates with multiple parameters...
#include <iostream>
using namespace std;

/*
template<class T1, class T2>
class nameOfClass{
    // body
}
*/

// class myClass
// {
// public:
//     int data1;
//     char data2;
//     void display()
//     {
//         cout << this->data1 << " " << this->data2;
//     }
// };

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};

int main()
{
    myClass<int, char> obj1(1, 'c');
    myClass<int, float> obj2(1, 1.9);
    myClass<char, float> obj3('a', 1.9);
    obj1.display();
    cout << endl;
    obj2.display();
    cout << endl;
    obj3.display();
}
