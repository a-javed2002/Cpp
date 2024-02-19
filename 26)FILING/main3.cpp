#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void output_matrix(int a[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void bin_example()
{
    int pixels[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            pixels[i][j] = 1 + i * j;
        }
    }
    output_matrix(pixels, 3, 3);

    // Writting A File
    ofstream fout("data.bin", ios::binary); // SHORTCUT      //ofstream fout;//fout.open("data.bin");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fout.write((char *)&pixels[i][j], sizeof(int));
        }
    }

    fout.close();

    // Read Data Back In..
    cout << "Resetting pixels..." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            pixels[i][j] = 0;
        }
    }
    output_matrix(pixels, 3, 3);

    cout << "Reading..." << endl;
    ifstream fin("data.bin", ios::binary);

    if (fin.fail()) // if (!fin)
    {
        cout << "Failed To Read File..." << endl;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fin.read((char *)&pixels[i][j], sizeof(int));
            }
        }
        fin.close();
    }
    output_matrix(pixels, 3, 3);
}

// Character Input Output File Method
int main()
{
    bin_example();

    return 0;
}