#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;//it skips the iteration of 2..proof-->it wont print 2....
    }
    return 0;
}