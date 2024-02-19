#include <iostream>
using namespace std;

class Plugin
{
public:
    void apply_filter(int img[5][5])
    {
        cout << "\nThis is photoshop class function...can't do anything" << endl;
    }
};

class MakeItWhite : public Plugin
{
public:
    // overriding
    void apply_filter(int img[5][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                img[i][j] = 255;
            }
        }
    }
};

class MakeItBlack : public Plugin
{
public:
    // overriding
    void apply_filter(int img[5][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                img[i][j] = 0;
            }
        }
    }
};

// Classes End here...everything else is global

void initialize_matrix(int a[5][5]);
void output_matrix(int a[5][5]);

int main()
{
    int pic[5][5];

    initialize_matrix(pic);

    cout << "Before:" << endl;
    output_matrix(pic);

    Plugin p;
    p.apply_filter(pic);

    MakeItBlack mib; // we cannot do this as adobe don't know the names..adobe can't call them this in main
    mib.apply_filter(pic);
    cout << "\nAfter MAkeItBlack:" << endl;
    output_matrix(pic);

    MakeItWhite miw; // we cannot do this as adobe don't know the names..adobe can't call them this in main
    miw.apply_filter(pic);
    cout << "\nAfter MAkeItBlack:" << endl;
    output_matrix(pic);

    initialize_matrix(pic); // reset to original...

    return 0;
}

// helper functions
void initialize_matrix(int a[5][5])
{
    int val = 10;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = val;
            val += 1;
        }
    }
}

void output_matrix(int a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// laikin photoshop ko inn filters ka pata thori tha.....photoshop does not even know the names of filter..
//...now what to do
// check next file main2.cpp;