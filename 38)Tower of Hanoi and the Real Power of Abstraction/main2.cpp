//in japan this game is known as Tower of Hanoi...
// Auxiliary-->providing supplementary or additional help and support.
#include <iostream>
using namespace std;

void print_move(int disk, char from_rod, char to_rod)
{
    cout << "Move Disk " << disk << " From Rod " << from_rod << " To Rod " << to_rod << endl;
}

void move_disk(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        // just the smallest disk.can be moved directly anywhere...
        print_move(1, from_rod, to_rod);
        return;
    }

    // Move all-minus-largest from FROM to AUX (using TO as extra)
    move_disk(n - 1, from_rod, aux_rod, to_rod);

    // move largest disk
    print_move(n, from_rod, to_rod);

    // move all-minus-largest from AUX (where we left them) to TO (using FROM as extra)
    move_disk(n - 1, aux_rod, to_rod, from_rod);
}
void pause()
{
    getchar();
    getchar();
}
int main()
{
    int a = 1, opt;
    while (a = 1)
    {
        cout << "press 1 to game" << endl;
        cout << "press 2 for exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            int n; // Number of Disks...
            cout << "Enter Number of Disks" << endl;
            cin >> n;
            move_disk(n, 'A', 'C', 'B'); // A,B and C are names of rods...
            cout << "Press Enter TO Continue" << endl;
            pause();
            system("cls");
            break;
        case 2:
            a = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}