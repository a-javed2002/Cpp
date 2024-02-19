//protected visibility mode explained
#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

/*
                        Public derivation       Private derivation       Protected derivation
1)Private Members       Not inherited           Not inherited            Not inherited
2)Protected Members     Protected               Private                  Protected
2)Public Members        Public                  Private                  protected
*/