#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double d = 122.3456478;
    // float d = 122.3456478;
    cout << fixed << setprecision(3) << d;
    return 0;
}