#include <iostream>
using namespace std;

class Employee
{
    private:        //likho ya na likho...eik hee baat hay..only acess to this class
    int pay_rate;

public:
    // these are called setters and getters...
    void set_pay_rate(int pay_rate)
    {
        if (pay_rate > 14)
        {
            this->pay_rate = pay_rate;
        }
        else
        {
            cout << "pay rate " << pay_rate << " not acceptable.Not setting..." << endl;
        }
    }
    int get_pay_rate()
    {
        return pay_rate;
    }
};

int main()
{
    Employee e1;

    // e1.set_pay_rate = 0;     //error

    e1.set_pay_rate(15);
    cout << "Current Pay Rate: " << e1.get_pay_rate() << endl;

    e1.set_pay_rate(11);
    cout << "Current Pay Rate: " << e1.get_pay_rate() << endl;

    e1.set_pay_rate(20);
    cout << "Current Pay Rate: " << e1.get_pay_rate() << endl;

    return 0;
}