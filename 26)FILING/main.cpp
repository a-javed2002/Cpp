#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void char_example()
{
    ofstream fout;
    string filename = "sample.txt";
    string line = "My text line...";
    fout.open(filename);
    fout << line << endl;
    fout.close();

    ifstream fin;
    fin.open(filename);
    if (fin)
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
}


// Character Input Output File Method
int main()
{
    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;

    char_example();
    // bin_example();

    return 0;
}