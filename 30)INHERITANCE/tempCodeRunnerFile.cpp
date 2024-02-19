void Triangle::show_shape()
{ // should move this to shape!
    Point *temp = points;
    for (int i = 0; i < num_points; i++)
    {
        temp->print_point();
        temp++;
    }
}