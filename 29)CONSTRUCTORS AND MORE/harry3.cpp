#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    Point r = Point(2, 3);
    r.displayPoint();

    return 0;
}
