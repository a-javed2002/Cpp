#include <iostream>
using namespace std;
// using namespace first;   //gives error
// using namespace second;  //gives error

namespace first
{
    int var = 5;
}
namespace second
{
    float var2 = 3.1416;
}

int main()
{
    cout << first::var << endl;
    cout << second::var2 << endl;
    return 0;
}