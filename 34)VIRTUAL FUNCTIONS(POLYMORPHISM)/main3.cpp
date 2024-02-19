#include <iostream>
using namespace std;

class Plugin
{
public:
    virtual void apply_filter(int img[5][5]) = 0;   //pure virtual fn
    //why we even write this..when it have no body..???
    //so we can call it main..and override this....
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
Plugin *select_plugin();

int main()
{
    int pic[5][5];

    initialize_matrix(pic);

    cout << "Before:" << endl;
    output_matrix(pic);

    // Plugin p;
    // p.apply_filter(pic);

    Plugin *p;
    p = select_plugin();
    p->apply_filter(pic);
    cout << "After Plugin Application" << endl;
    output_matrix(pic);

    // Plugin q;
    //it will give error...
    //we cannot instantiate an abstract class...

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

Plugin *select_plugin()
{
    int temp;
    Plugin *p;
    cout << "1)Black To White" << endl;
    cout << "2)White To Black" << endl;
    cin >> temp;
    switch (temp)
    {
    case 1:
        p = new MakeItWhite;
        break;

    case 2:
        p = new MakeItBlack;
        break;
    default:
        break;
    }
    return p;
}