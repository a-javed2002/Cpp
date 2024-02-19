// FIFO(FIRST IN FIRST OUT)
// THIS METHOD IS EFFICIENT BUT HAS A DRAWBACK THAT IS LIMIT
// IN CLASS TEMPLATE EXAMPLE main2.cpp--->we have unlimited nodes depending on RAM....
#include <iostream>
using namespace std;
#define SIZE 10

void pause();

class Queue
{
private:
    int q[SIZE];
    int in, out;
    bool is_empty, is_full;

    // for circular increment
    void inc(int *arrow);

public:
    Queue();
    void enqueue(int val);
    int dequeue();
    void print_queue();
};

Queue::Queue()
{
    for (int i = 0; i < SIZE; i++)
    {
        q[i] = 0;
    }
    in = out = 0;
    is_empty = true;
    is_full = false;
}

void Queue::inc(int *arrow)
{
    if (*arrow + 1 == SIZE)
    {
        *arrow = 0;
    }
    else
    {
        *arrow += 1;
    }
}

void Queue::enqueue(int val)
{
    if (is_full)
    {
        throw "Queue full.Cannot Enqueue..."; // program crashes...as we don't made catch in enqueue
        // cout << "Queue full.CAnnot Enqueue..." << endl;      //print on console...
        // return;
    }

    // put where in is and increment in..
    q[in] = val;
    inc(&in); // change the main in..so we sent it's address...

    // check if wea are full now...
    if (in == out)
    {
        is_full = true;
    }
    // definitely not empty any more
    is_empty = false;
}

int Queue::dequeue()
{
    if (is_empty)
    {
        throw "Queue Empty.Cannot Dequeue..."; // will not crash..as try-catch is present..will show the message
    }

    // get from where out is and inc out...
    int ret = q[out];
    inc(&out);

    // see if we are now Empty...
    if (in == out)
    {
        is_empty = true;
    }
    // definitely not full any more...
    is_full = false;

    return ret;
}

void Queue::print_queue()
{
    cout << "[\t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << q[i] << "\t";
    }
    cout << "]" << endl;

    cout << " \t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << "\t";
    }
    cout << " " << endl;

    cout << " ";
    for (int i = 0; i <= in; i++)
    {
        cout << "\t";
    }
    cout << "^in" << endl;

    cout << " ";
    for (int i = 0; i <= out; i++)
    {
        cout << "\t";
    }
    cout << "^out" << endl;

    pause();
}

int main()
{
    Queue que;

    que.print_queue();

    que.enqueue(5);
    que.print_queue();

    que.enqueue(11);
    que.print_queue();

    que.enqueue(22);
    que.print_queue();

    que.enqueue(33);
    que.print_queue();

    que.enqueue(44);
    que.print_queue();

    // que.enqueue(55);        //uncomment and then change is_full...
    // que.print_queue();

    try
    {
        // let's dequeue...
        cout << endl
             << "Now Dequeue..." << endl;

        cout << "Got val: " << que.dequeue() << endl;
        que.print_queue();

        cout << "Got val: " << que.dequeue() << endl;
        que.print_queue();

        cout << "Got val: " << que.dequeue() << endl;
        que.print_queue();

        cout << "Got val: " << que.dequeue() << endl;
        que.print_queue();

        cout << "Got val: " << que.dequeue() << endl;
        que.print_queue();

        // cout << "Got val: " << que.dequeue() << endl;
        // que.print_queue();
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}

void pause()
{
    getchar();
}