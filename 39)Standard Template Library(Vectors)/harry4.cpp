// Linked Listing
// web --> "cppreference list" search kro
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> list1; // List Of Zero Length
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(4);

    list<int>::iterator itr1;
    itr1 = list1.begin();

    cout << *itr1 << " ";
    itr1++;
    cout << *itr1 << " ";
    itr1++;
    cout << *itr1 << " ";
    itr1++;
    cout << *itr1 << " ";
    itr1++;
    cout << *itr1 << " ";
    itr1++;

    return 0;
}