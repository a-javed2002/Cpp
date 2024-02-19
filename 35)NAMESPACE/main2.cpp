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
    float var = 3.1416;
}
int main()
{
    cout << first::var << endl;
    cout << second::var << endl;
    return 0;
}