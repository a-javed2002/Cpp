// https://www.cplusplus.com/reference/
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    // sort(arr, arr + 5);     //Range of Sorting
    // sort(arr, arr + 6, less<int>()); //Ascending
    sort(arr, arr + 6, greater<int>()); // Descending
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
