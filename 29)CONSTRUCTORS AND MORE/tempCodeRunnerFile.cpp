
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1,n2;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n3, n4;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}