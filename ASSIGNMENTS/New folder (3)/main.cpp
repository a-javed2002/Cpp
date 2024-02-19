#include <iostream>
using namespace std;
class shape
{
protected:
    int x;

public:
    shape();
    shape(int x)
    {
        this->x = x;
    }
};

class Circle : virtual public shape
{
protected:
    int y;

public:
    Circle(int y)
    {
        this->y = y;
    }
};

class Square : virtual public shape
{
protected:
    int z;

public:
    Square(int z)
    {
        this->z = z;
    }
};

class circle_on_square : public Circle, public Square
{
    int a;

public:
    circle_on_square(int x, int y, int z, int a) : shape(x), Circle(y), Square(z), a(a)
    {
    }
    void disp()
    {
        cout << x << endl
             << y << endl
             << z << endl
             << a << endl;
    }
};

int main()
{
    circle_on_square cc(1, 2, 3, 4);
    cc.disp();
}