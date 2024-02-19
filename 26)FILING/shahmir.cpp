#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void char_example()
{
    ifstream fin;
    ofstream fout;
    string line;
    fin.open("input.txt");
    fout.open("output.txt");    
    while (fin)
    {
        getline(fin, line);
        cout << line << endl;
        fout << line << endl;
    }
    fin.close();
    fout.close();
}

int main()
{
    char_example();
    return 0;
}