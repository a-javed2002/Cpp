// PROCESSOR DIRECTIVES AND MACROS
#include <iostream>
using namespace std;

#define SIZE 5

#define ABS(a) ((a) < 0 ? -(a) : (a))

#define INCLUDE_INVENTORY_MODULE
// COMMENT OUT ABOVE LINE TO REMOVE COMPILATION OF INVENTORY CODE..IT'S A SWITCH/FLAG
// COMMENT OUT OR DELETE--> INCLUDE_INVENTORY_MODULE = FALSE
// NOT COMMENT OUT NOR DELETE--> INCLUDE_INVENTORY_MODULE = TRUE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventory()
{
    cout << "Showing Inventory..." << endl;
}
#endif

int main()
{
    cout << "HELLO WORLD..." << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << endl;
    }
    cout << "SIZE" << endl;

    cout << "Abs Value: " << ABS(-25) << endl;

// IF SWITCH IS COMMENTED OUT OR DELETE..SO IT MEANS THE SWITCH IS OFF THEN THE COMPILATION OF FOLLOWING CODE IS NOT DONE.
#ifdef INCLUDE_INVENTORY_MODULE
    show_inventory();
#endif

    return 0;
}