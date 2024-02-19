#include <iostream> //cppreference.com...search kro..then C++OPERATOR PRECEDENCE...
using namespace std;
int main()
{
    // Operator Precedence
    int a = 3, b = 4;
    int c = (a * 5) + b;
    int d = ((((a * 5) + b) - 45) + 87);
    cout << c << endl << d;
    return 0;
}