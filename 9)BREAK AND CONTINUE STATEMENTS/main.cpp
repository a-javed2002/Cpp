#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            break;
        }
        cout << i << endl;//this line wont print 2..as loops breaks
    }

    return 0;
}
