// INHERITANCE AND OVERRIDING FUNCTIONS,DYNAMIC ARRAY LOCATION.
#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
    int x;
    int y;
    void print_point();
};

void Point::print_point()
{
    cout << "(" << x << "," << y << ")" << endl;
}

class Shape
{
public:
    int num_points;
    Point *points;

    Shape();
    void set_points(Point *p);
    float get_area();
};

Shape::Shape()
{
    cout << "In Shape Constructor" << endl;
    points = NULL;  // initialize
    num_points = 0; // initialize
    // do nothing..can't decide what "shape is"..
}

float Shape::get_area()
{
    // again can't do anything..
    return -1.0;
}

class Triangle : public Shape
{
public:
    Triangle();
    void set_points(Point *p); // overriding the function or method
    void show_shape();
    float get_area(); // overriding the function or method
};

Triangle::Triangle()
{
    cout << "In Triangle Constructor" << endl;
    num_points = 3;
}

void Triangle::set_points(Point *p)
{ // should move this to shape!
    points = p;
}

void Triangle::show_shape()
{ // should move this to shape!
    Point *temp = points;
    for (int i = 0; i < num_points; i++)
    {
        temp->print_point();
        temp++;
    }
}

float Triangle::get_area()
{
    int x0, y0, x1, y1, x2, y2; // temporary points for easy use
    Point *t = points;

    x0 = t->x;
    y0 = t->y;
    t++;
    x1 = t->x;
    y1 = t->y;
    t++;
    x2 = t->x;
    y2 = t->y;

    // formula for computing area
    return abs(x0 * (y1 - y2) + x1 * (y2 - y0) + x2 * (y0 - y1) / 2);
};

void create_shape()
{
    // Shape *s = new Shape;
    // cout << "Area of s: " << s->get_area() << endl;
    Triangle *t = new Triangle;
    // create points for triangle using array...
    Point p1, p2, p3;
    p1.x = p1.y = 0;
    p2.x = p2.y = 20;
    p3.x = p3.y = 25;

    Point *points_of_triangle; // need this on the heap

    points_of_triangle = new Point[3]; // don't do this without the 'new'
    points_of_triangle[0] = p1;
    points_of_triangle[1] = p2;
    points_of_triangle[2] = p3;

    t->set_points(points_of_triangle);
    t->show_shape();
    // now try to compute the area
    cout << "Area of t: " << t->get_area() << endl;
}

int main()
{
    create_shape();
    return 0;
}