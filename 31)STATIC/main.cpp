#include <iostream>
using namespace std;

class User
{
    int id;
    static int next_id;

public:
    static int next_user_id()
    {
        next_id++;
        return next_id;
    }

    User()
    {
        id = User::next_user_id();
    }

    int get_id()
    {
        return id;
    }
};

int User::next_id = 0; // Initialize the Static Variable Here...
//int User::next_id = 457;
//int User::next_id = 3227;

int main()
{
    User u;
    cout << "User u id: " << u.get_id() << endl;

    User v;
    cout << "User v id: " << v.get_id() << endl;
    return 0;
}