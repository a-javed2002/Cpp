#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void char_example()
{
    ofstream fout;
    string filename = "sample2.txt";
    string line = "My text line...";
    fout.open(filename);
    for (int i = 0; i < 15; i++)
    {
        fout << line << endl;
    }
    fout.close();

    ifstream fin;
    fin.open(filename);
    while (fin)             //if file opened successfully-->True    //if the EOF(End Of Reach) is Reached-->False
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
}

// Character Input Output File Methodlo
int main()
{
    char_example();
    return 0;
}