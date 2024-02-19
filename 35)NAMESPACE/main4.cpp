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
using namespace first;
using namespace second;
int main()
{
    cout << var << endl;
    cout << var2 << endl;
    return 0;
}