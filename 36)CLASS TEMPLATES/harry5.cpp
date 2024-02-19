// Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     // float avg = (float)((a + b) / 2.0);
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage3(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    // a = funcAverage(5, 2.4);
    // printf("The Average Of These Numbers Are %.3f", a);
    // a = funcAverage2(5, 2.4);
    // printf("\nThe Average Of These Numbers Are %.3f", a);
    a = funcAverage3(5, 2.4);
    printf("\nThe Average Of These Numbers Are %.3f", a);
    int x = 3, y = 10;
    swapp(x, y);        //swap is a builtin template of c++
    cout << endl;
    cout << x << " " << y << endl;
    return 0;
}