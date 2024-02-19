#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    // fib(1);
    // fib(3);
    // fib(2);
    // fib(10);
    // fib(5);
    fib(100);
    cout << "Total count: " << fib(-1) << endl;
    return 0;
}

int fib(int n)
{
    static int count = 0;

    // just for returning the count...
    if (n == -1)
    {
        return count;
    }

    count += 1; // increment call count...

    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}