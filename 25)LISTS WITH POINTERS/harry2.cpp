// Pointers To Objects And Arrow operator
#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data()
    {
        cout << "Real And Imaginary values are " << real << " And " << imaginary << " respectively" << endl;
    }
};

int main()
{
    // complex c1;
    // c1.set_data(10, 20);
    // c1.get_data();

    // complex c2;
    // complex *ptr = &c2;
    // (*ptr).set_data(30, 40);
    // (*ptr).get_data();

    // complex c3;
    // complex *ptr2 = &c3;
    // ptr2->set_data(50, 60);
    // ptr2->get_data();

    complex *ptr3=new complex;
    ptr3->set_data(70, 80);
    ptr3->get_data();

    return 0;
}