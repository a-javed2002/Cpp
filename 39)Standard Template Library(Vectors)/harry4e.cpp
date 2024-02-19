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
    cout << endl;
}

int main()
{
    list<int> list1; // List Of Zero Length
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(4);
    display(list1);

    list<int> list2(3); // Empty List OF Size 3
    list<int>::iterator itr2;
    itr2 = list2.begin();
    *itr2 = 45;
    itr2++;
    *itr2 = 23;
    itr2++;
    *itr2 = 76;
    itr2++;
    display(list2);

    cout << "\nSorting List 1" << endl;
    display(list1);
    list1.sort();
    display(list1);

    cout << "\nSorting List 2" << endl;
    display(list2);
    list2.sort();
    display(list2);

    cout << "\nMerging Lists" << endl;
    list1.merge(list2);     //list2 does not exist
    // list1.sort(); //agar pahlay nhi kya tou baad may krlo....
    display(list1);
    
    cout << "\nReversing The List" << endl;
    display(list1);
    list1.reverse();
    display(list1);
    
    // cout << "\nAccessing The List2" << endl;
    // *itr2=456;
    // itr2++;
    // *itr2=46;
    // itr2++;
    // display(list2);      //kuch nhi ayega...

    return 0;
}