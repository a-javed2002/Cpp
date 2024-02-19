#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "ENTER TABLE NUMBER" << endl;
    cin >> n1;
    cout << "ENTER NUMBER TILL THE TABLE FORM" << endl;
    cin >> n2;
    for (int i = 1; i <= n2; i++)
    {
        cout << n1 << " x " << i << " = " << (n1 * i) << endl;
    }
    return 0;
}