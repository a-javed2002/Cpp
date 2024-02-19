#include <iostream>
#include <fstream>
using namespace std;

struct PayStub
{
    int id_num;
    bool overtime;
    float hourly_rate;
};

int main()
{
    PayStub info = {1234, false, 15.45};

    ofstream data_store;

    data_store.open("test.cs111", ios::binary);

    char *raw_data = (char*)&info;
    data_store.write(raw_data, sizeof(PayStub));

    data_store.close();

    return 0;

}