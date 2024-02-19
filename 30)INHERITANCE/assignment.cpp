/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
// #include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void fundamental_operations(int x, int y)
    {
        a = x;
        b = y;
    }
    void display_fundamental_operations()
    {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Division: " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void scientific_operations(int x, int y)
    {
        a = x;
        b = y;
    }
    void display_scientific_operations()
    {
        cout << "sin(" << a << "): " << sin(a) << endl;
        cout << "cos(" << a << "): " << cos(a) << endl;
        cout << "tan(" << a << "): " << tan(a) << endl;
        cout << "sin(" << b << "): " << sin(b) << endl;
        cout << "cos(" << b << "): " << cos(b) << endl;
        cout << "tan(" << b << "): " << tan(b) << endl;
        cout << "Power of " << a << " is " << b << ": " << pow(a, b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    SimpleCalculator obj1;
    obj1.fundamental_operations(5, 5);
    obj1.display_fundamental_operations();

    ScientificCalculator obj2;
    obj2.scientific_operations(5, 5);
    obj2.display_scientific_operations();

    HybridCalculator obj3;
    obj3.fundamental_operations(5, 5);
    obj3.display_fundamental_operations();
    obj3.scientific_operations(5, 5);
    obj3.display_scientific_operations();
    return 0;
}

//The type of inheritance we are using here is multiple inheritances.
//The mode of inheritance used here is public for both the base classes.

//talking about code reusability here in the class hybrid_calculator 
//we have reused the code of the classes simple_calculator and scientific_calculator
//reducing our efforts and saving ourselves a bit of time.