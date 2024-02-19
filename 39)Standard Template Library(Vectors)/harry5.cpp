// Map
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["BOB"] = 58;
    marksMap["Aryan"] = 57;
    marksMap["John"] = 78;
    marksMap["Michael"] = 65;
    marksMap["Laura"] = 53;

    marksMap.insert({{"Linda", 56}, {"Elisha", 16}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        // cout << Key << " " << value << "\n";
        cout << (*iter).first << " " << (*iter).second << "\n"; // Automatically Sorting...!!
    }
    cout << "The Size is " << marksMap.size() << endl;
    cout << "The Maximum Size is " << marksMap.max_size() << endl;
    cout << "The Empty Return Value Is is " << marksMap.empty() << endl;
    return 0;
}