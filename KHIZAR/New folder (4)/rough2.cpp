#include <iostream>
#include <cstdlib>
using namespace std;

double getBase(double premium);
void accidentAdjust(double accidents, double &premium);
double getRiskFactor(double premium, char riskFactor, char a, char b, char c, char d, char e);

int main()
{
    double carValue, premium;
    int accidents;
    char riskFactor;

    cout << "National Farm Insurance Company" << endl;
    cout << "Automotive Policy Six-Month premium Calculator" << endl << endl;

    cout << "Enter the value of the car to be insured:  $";
    cin >> carValue;
    if (carValue < 0)
    {
        cout << "You have entered an invalid number." << endl;
        exit(1);
    }

    double getBase(double carValue, double premium);

    cout << "How many accidents has the policyholder caused in the last three years? ";
    cin >> accidents;
    if (accidents < 0)
    {
        cout << "You have entered an invalid number." << endl;
        exit(1);
    }
    void accidentAdjust(double &accidents, double premium);

    cout << "Enter the geographical risk factor (Class a - e): ";
    cin >> riskFactor;

    double getRiskFactor(riskFactor);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The premium for this policyholder will be $" << premium << endl
         << endl;

    cout << "Call the neighbor that's on your side.  Call National Farm." << endl;

    return 0;
}

double getBase(double carValue, double premium)
{
    premium = carValue / 20;

    return premium;
}

void accidentAdjust(double accidents, double &premium)
{
    if (accidents < 2)
        premium = premium;
    if (accidents > 1 && accidents <= 3)
        premium = premium * (accidents * .01);
    if (accidents > 3 && accidents <= 6)
        premium = premium * (accidents * .03);
    if (accidents > 6)
    {
        cout << "We will not be able to insure your vehicle." << endl;
        exit(1);
    }
}

double getRiskFactor(double premium, char riskFactor, char a, char b, char c, char d, char e)
{
    if (riskFactor = a)
        premium = premium + 20;
    if (riskFactor = b)
        premium = premium + 30;
    if (riskFactor = c)
        premium = premium + 50;
    if (riskFactor = d)
        premium = premium + 100;
    if (riskFactor = e)
        premium = premium + 250;

    return premium;
}