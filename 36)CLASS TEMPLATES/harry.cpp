//Introduction
// why you use templates
//  1. Follow Dry Pattern --> Dont' Repeat Yourself
//  2. Generic Programming

#include <iostream>
using namespace std;

template <class T>
class vector
{
    T *arr;
    int size;

public:
    vector(T *arr)[
        // code
    ]
    // and many other methods
};

int main()
{
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
