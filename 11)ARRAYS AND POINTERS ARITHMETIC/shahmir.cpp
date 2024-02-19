#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int num[10];
cout<<"hi\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " + i + 1;
        cin >> num[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] + "\n";
    }
cout<<"bye";

    return 0;
}