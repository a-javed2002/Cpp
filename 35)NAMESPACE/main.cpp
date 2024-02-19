#include <iostream>

//namespace allows us to create sub-scopes within global scopes...
//we can add variables,functions and classes...
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
    std::cout << first::var << std::endl;
    std::cout << second::var << std::endl;
    return 0;
}
