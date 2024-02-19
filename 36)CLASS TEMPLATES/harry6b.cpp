// Member Function Templates & Overloading Template Functions
#include <iostream>
using namespace std;

template <class T>
class Harry
{
    T data;

public:
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}

int main()
{
    // Harry<int> h(5.7);
    // Harry<float> h(5.7);
    Harry<char> h('c');
    h.display();
    return 0;
}