// Virtual Base Class
#include <iostream>
using namespace std;
class A
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};

int main()
{
    A obj1;
    obj1.say();
    
    B obj2;
    obj1.say();
    
    C obj3;
    obj1.say();
    
    D obj4;
    obj1.say();
}