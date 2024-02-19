//&SCOPES
#include <iostream>
int globe=10;
void func1(){
    std::cout<<"\nIN FUNCTION THE VALUE OF globe IS "<<globe;
}
int main()
{
    std::cout<<"\nIN MAIN FUNCTION THE VALUE OF globe IS "<<globe;
    int globe=5;
    std::cout<<"\nIN MAIN FUNCTION AFTER LOCAL VARIABLE globe...THE VALUE OF globe IS "<<globe;
    globe=2;
    std::cout<<"\nIN MAIN FUNCTION AFTER LOCAL VARIABLE globe UPDATING IT...THE VALUE OF globe IS "<<globe;
    func1();
    return 0;
}
//? THE GLOBAL AND LOCAL VARIABLES NAME CAN BE SAME.....