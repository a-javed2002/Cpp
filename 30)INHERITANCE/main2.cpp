// INHERITANCE AND OVERRIDING FUNCTIONS,DYNAMIC ARRAY LOCATION.
#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    int x;
    int y;
    void print_point();
    int num_points;
    Shape *points;

    Shape();
    void set_points(Shape *p);
    float get_area();
};

void Shape::print_point()
{
    cout << "(" << x << "," << y << ")" << endl;
}

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
    void set_points(Shape *p);
    void show_shape();
    float get_area(); // overriding the function or method
};

Triangle::Triangle()
{
    cout << "In Triangle Constructor" << endl;
    num_points = 3;
}

void Triangle::set_points(Shape *p)
{ // should move this to shape!
    points = p;
}

void Triangle::show_shape()
{ // should move this to shape!
    Shape *temp = points;
    for (int i = 0; i < num_points; i++)
    {
        temp->print_point();
        temp++;
    }
}

float Triangle::get_area()
{
    int x0, y0, x1, y1, x2, y2; // temporary points for easy use
    Shape *t = points;

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
    Shape p1, p2, p3;
    p1.x = p1.y = 0;
    p2.x = p2.y = 20;
    p3.x = p3.y = 25;

    Shape *points_of_triangle; // need this on the heap

    points_of_triangle = new Shape[3]; // don't do this without the 'new'
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