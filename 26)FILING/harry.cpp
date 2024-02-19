#include <iostream>
#include <fstream>
/*
The Useful Classes For Working With Files In C++ are:
1. fstreambase
2. istreambase --> derived from fstreambase
2. ostreambase --> derived from fstreambase
*/
// In order work with files in C++,you will have to open it...primarily,there are 2 ways to open a file...
// 1. Using A Constructor
// 1. Using The Member Function open() of The Class
using namespace std;

int main()
{
    // Opening files using constructor and writing it
    string st = "Hello World";
    ofstream out("harryA.txt"); // Write operation
    out << st;

    // Opening files using constructor and writing it
    ifstream in("harryB.txt"); // Read operation
    string st2;
    // in >> st2;      //Bring First Word Only...
    getline(in, st2);
    cout << st2;

    return 0;
}