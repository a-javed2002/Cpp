// DEFAULT ARGUMENTS
#include <iostream>
using namespace std;
float profit(int investment, float factor = 1.05)//always write your default arguments..in extreme right
{
    return investment * factor;
}
int main()
{
    int money = 100000;
    cout << "IF YOU INVESTMENT " << money << "IN SCHEME 1 YOU CAN MAKE " << profit(money) << endl;
    cout << "IF YOU INVESTMENT " << money << "IN SCHEME 2 YOU CAN MAKE " << profit(money, 1.10) << endl;
    return 0;
}