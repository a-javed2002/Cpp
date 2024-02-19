// Linked Listing
// web --> "cppreference list" search kro
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr1;
    for (itr1 = lst.begin(); itr1 != lst.end(); itr1++)
    {
        cout << *itr1 << " ";
    }
}

int main()
{
    list<int> list1; // List Of Zero Length
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(4);

    display(list1);
    return 0;
}