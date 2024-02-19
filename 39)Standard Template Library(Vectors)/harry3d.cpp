// web --> http://cplusplus.com/
// vector info --> http://www.cplusplus.com/reference/vector/vector/
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying Thid Vector.." << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // Zero length Integer Vector...
    // display(vec1);

    vector<char> vec2(4); // 4-Element Character Vector...
    // display(vec2);

    vector<char> vec3(vec2); // 4-Element Character Vector From vec2...
    // display(vec3);

    vector<int> vec4(6, 3); // 6 Element OF 3s...
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}