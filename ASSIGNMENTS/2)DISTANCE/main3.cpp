// parameterized constructors
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x;
    int y;

public:
    // point();
    void display_point();
    point(int a, int b);
    void difference(point, point);
};
point::point(int a, int b)
{
    x = a;
    y = b;
    display_point();
}
void point::display_point()
{
    cout << "The point is : (" << x << "," << y << ")" << endl;
}
void point::difference(point o1, point o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    double dist = sqrt((x_diff) * (x_diff) + (y_diff) * (y_diff));
    cout << "Distance is: " << dist << " units";
}

int main()
{
    point p1(0, 1), p2(0, 6);
    // p1.display_point();
    // p2.display_point();
    p1.difference(p1, p2);

    return 0;
}