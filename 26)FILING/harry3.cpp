#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // declaring an object of the type ofstream
    ofstream out;
    // connecting the object out to the text file using the member function open()
    out.open("harry3.txt");
    // writing to the file
    out << "This is me\n";
    out << "This is also me";
    out.close();
    // closing the file connection

    ifstream in;
    in.open("harry3.txt");
    string st, st2;
    // in >> st >> st2;
    // cout << st << " " << st2;

    // getline(in, st);
    // cout << st;
    // cout << endl;
    // getline(in, st2);
    // cout << st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}
