// name of the classes in standard template library's are lowercase...
#include <iostream>
#include <vector> //flexibel size collection of one type...henoginity nhi hay
using namespace std;
void output_vector_values(vector<int> v);         // prototype(declaration of function)
void reverse_output_vector_values(vector<int> v); // prototype(declaration of function)

// API(APPLICATION PROGRAMMING INTERFACE)
// Ser of function..provided by the entity..for interactions
// matlab public functions
// setters and getters

int main()
{
    vector<int> marks; // a vector is Essentially Python's list...

    for (int i = 1; i <= 5; i++)
    {
        marks.push_back(i * 10); // is append
    }
    // vector<int>marks[10,20,30,40,50]
    // alternatively

    int val = marks[1];
    cout << "At Index 1: " << val << endl;

    output_vector_values(marks);
    reverse_output_vector_values(marks);

    // let's remove a value from a specific position...
    auto it = marks.begin();
    marks.erase(it + 0);
    marks.erase(it + 2); // after one removal...array element position changes...
    output_vector_values(marks);

    return 0;
}

void output_vector_values(vector<int> v)
{
    // use v.begin() to get a pointer to the start...
    //(but this isn't an int * )...return a different object pointer...It's a really weird pointer called "iterator"...
    // we don't know how to declare that.So,let's use the auto keyword here...

    cout << "[";
    for (auto i = v.begin(); i != v.end(); i++) // i++ this is not increment...this is something else...it moves the pointer to next element
    {
        cout << *i << " ";
    }
    cout << "]" << endl;

    // Alternatively...
    // cout << "[";
    // for (int x : v)      //sort of like the for loop in python...(for-each loop)     //for each integer x in v
    // {
    //     cout << x << " ";
    // }
    // cout << "]" << endl;
}

void reverse_output_vector_values(vector<int> v)
{
    // just change the "begin" to "rbegin" and "end" to "rend"...
    cout << "[";
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << "]" << endl;
}

// To Enable C++11 extensions in Dev-CPP
// Go to Tools -> Compiler Options
// Add to the following to: "...when calling compiler"
//       -std=gnu++0x
// OR
//       -std=c++0x
// OR
//       -std=c++11

// for linux
// for g++ add: -std=c++11