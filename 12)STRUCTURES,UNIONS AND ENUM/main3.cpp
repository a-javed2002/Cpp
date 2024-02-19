#include <iostream>
using namespace std;
int main()
{
    enum Meal // only main can acess...not other functions
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    cout << endl;

    Meal m1 = lunch; // meal is enum(datatype)...m1 is variable...lunch is value
    cout << m1 << endl;
    Meal m2 = breakfast; // meal is enum(datatype)...m1 is variable...lunch is value
    cout << m2 << endl;
    Meal m3 = dinner; // meal is enum(datatype)...m1 is variable...lunch is value
    cout << m3 << endl;

    cout << endl;

    cout << (m1 == 3) << endl; // 1 if true and 0 if false
    cout << (m2 == 1) << endl; // 1 if true and 0 if false
    cout << (m3 == 2) << endl; // 1 if true and 0 if false
    return 0;
}
