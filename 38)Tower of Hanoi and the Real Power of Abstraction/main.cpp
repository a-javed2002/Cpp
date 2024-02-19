// Auxiliary-->providing supplementary or additional help and support.
// in recursion we have...initial call then recursive calls...
#include <iostream>
using namespace std;

static int count = 0;

void print_move(int disk, char from_rod, char to_rod)
{
    cout << "Move Disk " << disk << " From Rod " << from_rod << " To Rod " << to_rod << endl;
}

void move_disk(int n, char from_rod, char to_rod, char aux_rod)
{
    count++;
    if (n == 1)
    {
        // just the smallest disk.can be moved directly anywhere...
        print_move(1, from_rod, to_rod);
        return;
    }

    // Move all-minus-largest from FROM to AUX (using TO as extra)
    move_disk(n - 1, from_rod, aux_rod, to_rod); // invocation(call of function)

    // move largest disk
    print_move(n, from_rod, to_rod);

    // move all-minus-largest from AUX (where we left them) to TO (using FROM as extra)
    move_disk(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 4;                   // Number of Disks...
    move_disk(n, 'A', 'C', 'B'); // A,B and C are names of rods...
    cout << "\nTotal Steps Are: " << count << endl;
    return 0;
}
//algorithim is recursive...
//process is recursion...
//calls are recursive call...