#include <iostream>
#include <fstream>
using namespace std;

class Laptop
{
    int laptopId, Price;
    string Company;

public:
    Laptop();
    void read_file();
};

void read_file()
{
    // ofstream fout;
    // fout.open(filename);
    // for (int i = 0; i < 15; i++)
    // {
    //     fout << line << endl;
    // }
    // fout.close();

    string filename = "read.txt";
    string line;
    string temp;
    ifstream fin;
    fin.open(filename);
    while (fin) // if file opened successfully-->True    //if the EOF(End Of Reach) is Reached-->False
    {
        getline(fin, line);
        temp = line.front();
        cout << "First Character is: " << temp << endl; // Testing
        if (temp != "")
        {
            cout << " + " << line << endl;
        }
    }
    fin.close();
}

int main()
{
    read_file();
    return 0;
}